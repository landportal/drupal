// Constants

//var ajaxURL = document.getElementById('api-url').value;
//var languageCode = document.getElementById('selected-language').value;
//var countryCode = document.getElementById('entity-id').value;

// Stack to store ajax call indicators
var callStack = [];

////////////////////////////////////////////////////////////////////////////////
//                                 LOADERS
////////////////////////////////////////////////////////////////////////////////

// Region chart loader

var regionMap = null;

var regionMapLoader = wesCountry.loader.renderChart({
	container: "#mapDiv",
	chartType: "map",
	download: false,
	cache: true,
	onChange: function(element, index) {
		//var data = JSON.parse(mapLoader.getData());
		//updateCompareChart(data.by_year[element]);
	},
	getChartData: function(options, data) {
		data = JSON.parse(data);

		var countries = data.by_country;
		var length = countries.length;

		for (var i = 0; i < length; i++)
			countries[i].time = "";

		options["countries"] = countries;

		// Chart foot
		var foot = getDatasourceLink(data.organization_id, data.organization_name);

		// Region bar chart
		updateRegionCompareChart(countries, foot);

		return options;
	},
	afterRenderCharts: function(charts) {
		var regionCode = getRegionStringCode(getCountry().region.code);

		regionMap = charts[0];

		regionMap.zoomToCountry('region-' + regionCode);

		selectCountry(null, regionMap.getCountryInfo(getCountry().code));
	},
	borderWidth: '0.28em',
	borderColour: '#dfdfdf',
	landColour: '#e8e8e8',
	colourRange: ['#A9F5BC', '#1184a7'],
	zoom: false,
	zoomToCountryFactor: 1,
	onCountryClick: function(info) {
		window.location.href = '/book/countries/' + info.iso3;
	},
	onCountryOver: function(info) {
		selectCountry(this, info);
	},
	onCountryOut: function(info) {

	}
});

// Timeline loader

var timelineOptions = chartOptions['chart-timeline-comparison'];
timelineOptions.cache = true;
timelineOptions.getChartData = function(options, data) {
		data = JSON.parse(data);
  console.log('Start timeline');
		var series = [];

		var comparingSelector = document.getElementById('country-comparing-select');

		var serie1 = Drupal.settings.landbook.countryCode;
		var serie2 = comparingSelector.value;

		var serie2Name = comparingSelector.options[comparingSelector.selectedIndex].innerHTML;

		if (data.series[serie1])
			series.push(data.series[serie1]);

		if (data.series[serie2]) {
			serie = data.series[serie2];
			serie.name = serie2Name;

			series.push(serie);
		}

		options.series = series
		options.xAxis.values = data.times;

		// Update legend

		document.getElementById('compare-legend-circle-1').style.backgroundColor = options.serieColours[0];
		document.getElementById('compare-legend-circle-2').style.backgroundColor = options.serieColours[1];

		document.getElementById('compare-legend-text-1').innerHTML = series && series[0] ? series[0].name : "";
		document.getElementById('compare-legend-text-2').innerHTML = series && series[1] ? series[1].name : "";

		// Foot
		options.foot = getDatasourceLink(data.organization_id, data.organization_name);

		return options;
};

var timelineLoader = wesCountry.loader.renderChart(timelineOptions);

/* Starred indicator loaders */

var starredOptions = chartOptions['starred-indicator'];

var starredIndicatorList = document.getElementById('starred-indicators').value.split(',');

var starredLoaderList = {};

for (var i = 0; i < starredIndicatorList.length; i++) {
	var indicator = starredIndicatorList[i];

	if (!indicator)
		continue;

	var options = wesCountry.clone(chartOptions['starred-indicator']);
	options.container = '#starred_' + indicator;
	options.getChartData = getStarredChartData;

	var loader = wesCountry.loader.renderChart(options);

	starredLoaderList[indicator] = loader;
}

function getStarredChartData(options, data) {
	// Check and load if there are more indicators in the stack
	loadSmallChartFromStack();

	data = JSON.parse(data);

	var series = [];

	var comparingSelector = document.getElementById('country-comparing-select');

	var serie1 = Drupal.settings.landbook.countryCode;
	var serie2 = comparingSelector.value;

	var serie2Name = comparingSelector.options[comparingSelector.selectedIndex].innerHTML;

	if (data.series[serie1])
		series.push(data.series[serie1]);

	if (data.series[serie2]) {
		serie = data.series[serie2];
		serie.name = serie2Name;

		series.push(serie);
	}

	options.series = series
	options.xAxis.values = data.times;

	return options;
};

////////////////////////////////////////////////////////////////////////////////
//                                PAGE STATE
////////////////////////////////////////////////////////////////////////////////

wesCountry.stateful.start({
	init: function(parameters, selectors) {
		// Set current country selected in select
		var countrySelect = document.getElementById('country-select');
		var selected = countrySelect.querySelector('option[value=' + Drupal.settings.landbook.countryCode + ']');

		if (selected)
			countrySelect.selectedIndex = selected.index;

		// Country comparison cannot be this country
		var thisCountryOption =
			selectors['#country-comparing-select'].querySelector(String.format('option[value={0}]', Drupal.settings.landbook.countryCode));

		if (thisCountryOption) {
			thisCountryOption.disabled = "disabled";
		}

		// Avoid selecting an unselectable option for country-comparing-select
		// We select the first selectable country of the same region of this country
/*
		var selector = selectors['#country-comparing-select'];

		var option = selector.querySelector("option:not([disabled])");
		var region = thisCountryOption && thisCountryOption.hasAttribute("data-region") ? thisCountryOption.getAttribute("data-region") : "";

		var optionSameRegion = selector.querySelector("option[data-region='" + region + "']:not([disabled])");

		option = option && option.index ? option.index: -1;

		selector.selectedIndex = optionSameRegion && optionSameRegion.index ? optionSameRegion.index: option;

		selectors['#country-comparing-select'].refresh();
		
		*/

		// Show fixed charts
		showFixedCharts();

		// Draw World maps
		drawCountryWorldMaps();
	},
	urlChanged: function(parameters, selectors) {
		var country = Drupal.settings.landbook.countryCode;

		var countrySelector = selectors["#country-comparing-select"];
		var countryName = countrySelector.querySelector(String.format("option[value={0}]", country)).innerHTML;

		var description = String.format("{0} @landportal", countryName);

		var url = wesCountry.stateful.getFullURL();
		util.generateShareLinks(url, description);
	},
	elements: [
		{
			name: "source",
			ignore: true,
			selectedIndex: function(parameters, selectors) {
				// Load indicator select
				return loadIndicatorSelect(parameters, selectors);

				// If no indicator in query then first element is selected
				// Else the source for that indicator is selected
				//return getSourceFromSelectedIndicator(parameters, selectors);
			},
			selector: "#source-select",
			onChange: function(index, value, parameters, selectors) {
				console.log("source-select: onChange: " + value);
				// Load indicator select
				loadIndicatorsFromSource(parameters, selectors);

				// When a source is selected then its first not null indicator is selected
				var indicatorSelect = selectors['#indicator-select'];

				// Get datasource of selected indicator
				var indicator = parameters["indicator"];
				var selectedIndicatorOption = document.querySelector('#indicator-select option[value="' + indicator + '"]');
				var selectedIndicatorParentLabel = selectedIndicatorOption && selectedIndicatorOption.parentNode ?
					selectedIndicatorOption.parentNode.label : "-1";

				// Get this datasource label
				var indicatorOption = document.querySelector('#indicator-select optgroup[label="' + value + '"] option:not([disabled])');
				var indicatorParentLabel = indicatorOption && indicatorOption.parentNode ?
					indicatorOption.parentNode.label : "-2";

				if (selectedIndicatorParentLabel && indicatorParentLabel && selectedIndicatorParentLabel == indicatorParentLabel) {
					console.log("Init: source")
				}
				// If two labels are different then the indicator is updated
				else if (indicatorOption) {
					indicatorSelect.selectedIndex = indicatorOption.index;
					indicatorSelect.refresh();
				}
			}
		},
		{
			name: "indicator",
			selector: "#indicator-select",
			onChange: function(index, value, parameters, selectors) {
				console.log("indicator-select: onChange: " + value);
			/*
				// Set this indicator source
				var source = selectors['#indicator-select'].options[index].parentNode.label;

				selectors['#source-select'].value = source;
				*/
				// Region map
				loadRegionMap(parameters);

				// Update indicator names in view
				var texts = document.querySelectorAll('span.indicator-name');

				var value = this.options[index] ? this.options[index].innerHTML : null;

				if (value) {
					for (var i = 0; i < texts.length; i++)
						texts[i].innerHTML = value;
				}

				// Comparing country graph
				loadComparingTimeline(parameters);
			}
		},
		{
			name: "comparing-country",
			selector: "#country-comparing-select",
			selectedIndex: function(parameters, selectors) {
				var selector = selectors['#country-comparing-select'];
				var comparing = parameters["comparing-country"];
				
				if (comparing && comparing != "" && comparing != Drupal.settings.landbook.countryCode)  {
					var option = selector.querySelector(String.format('option[value={0}]', comparing));
					
					if (option && option.index)
						return option.index;
				}
				
				// Avoid selecting an unselectable option for country-comparing-select
				// We select the first selectable country of the same region of this country
				
				var thisCountryOption = selector.querySelector(String.format('option[value={0}]', Drupal.settings.landbook.countryCode));

				var region = thisCountryOption && thisCountryOption.hasAttribute("data-region") ? thisCountryOption.getAttribute("data-region") : "";
				
				var selectorOptions = selector.options;
				var optionSameRegion = null;
				
				for (var i = 0; i < selectorOptions.length; i++) {
					var option = selectorOptions[i];
					
					if (option.disabled)
						continue;
					
					if (option.value == Drupal.settings.landbook.countryCode)
						continue;
					
					if (!optionSameRegion)
						optionSameRegion = option;
						
					if (option.getAttribute("data-region") == region) {
						optionSameRegion = option;
						break;
					}
				}

				return optionSameRegion && optionSameRegion.index >= 0 ? optionSameRegion.index: -1;
			},
			onChange: function(index, value, parameters, selectors) {
				console.log("comparing-country: onChange: " + value);
				loadComparingTimeline(parameters);
			}
		}
	]
});

// When a country is selected we move to country view
document.getElementById('country-select').onchange = function() {
	window.location.href = '/book/countries/' + this.options[this.selectedIndex].value;
}

////////////////////////////////////////////////////////////////////////////////
//                                CHARTS
////////////////////////////////////////////////////////////////////////////////

// Region bar chart

function loadRegionMap(parameters) {
	var region = getCountry().region.code;
	var indicator = parameters["indicator"];

	regionMapLoader.load({
		url: Drupal.settings.landbook.ajaxURL + '/observations_by_region.php',
		parameters: String.format("region={0}&indicator={1}&language={2}",
					  region, indicator, Drupal.settings.landbook.languageCode)
	});
}

// Refresh comparing timeline

function loadComparingTimeline(parameters) {
	var country1 = Drupal.settings.landbook.countryCode;
	var country2 = parameters["comparing-country"];
	var indicator = parameters["indicator"];
	
	if (!country1 || country1 == "" || !country2 || country2 == "" || !indicator || indicator == "")
		return;
		
	console.log(String.format("load Data country:{0}, comparing:{1}, indicator:{2}", country1, country2, indicator));
	
	timelineLoader.load({
		url: Drupal.settings.landbook.ajaxURL + '/observations_by_country.php',
		parameters: String.format("country1={0}&country2={1}&indicator={2}&language={3}",
															country1, country2, indicator, Drupal.settings.landbook.languageCode),
	});
	
	// Fill call stack
	callStack = [];

	for (var indicator in starredLoaderList)
		callStack.push({
			indicator: indicator,
			ajaxOptions: {
				url: Drupal.settings.landbook.ajaxURL + '/observations_by_country.php',
				parameters: String.format("country1={0}&country2={1}&indicator={2}&language={3}",
																		country1, country2, indicator, Drupal.settings.landbook.languageCode),
			}
		});
		
	loadSmallChartFromStack();
}

// Comparing timeline small charts (Stack)

function loadSmallChartFromStack() {
	if (callStack.length > 0) {
		var options = callStack.shift();
		
		starredLoaderList[options.indicator].load(options.ajaxOptions);
	}
}

/* Fixed charts */

function showFixedCharts() {
	for (var element in chartOptions) {
			var options = wesCountry.clone(chartOptions[element]);

			var containerName = options.container

			if (!containerName)
				continue

			containerName += ' div.chart-content';

			if (!containerName)
				continue;

			var container = document.querySelector(containerName);

			if (!container)
				continue;

			var observations = wesCountry.data.getObservationFromTable({
				container: containerName
			});

			var selectBy = options.selectBy;

			if (!observations || !selectBy || !observations[selectBy] || observations[selectBy].length < 1)
				continue;

			options.container = containerName;

			if (element == "main-index-rankings") {
				var length = observations[selectBy].length;

				var names = [];
				var values = [];

				for (var i = 0; i < length; i++) {
					var name = observations[selectBy][i].name;
					var value = observations[selectBy][i].series;

					value = value[0] ? value[0].values : null;
					value = value[0] ? value[0] : null;

					names.push(name);
					values.push(value);
				}

				options.series = [
					{
						name: "",
						values: values
					}
				];

				options.xAxis.values = names;
			}
			else {
				options.series = observations[selectBy][0].series;
				options.xAxis.values = observations.times;
			}

			options.width = container.parentNode.offsetWidth;
			options.height = container.parentNode.offsetHeight;

			container.style.height = options.height + 'px';

			wesCountry.charts.chart(options);
	}
}

/* World Maps */

function drawCountryWorldMaps() {
	var country = getCountry();

	var worldMap = document.querySelector('#world-map');

	wesCountry.maps.createMap({
		container: '#world-map',
		"borderWidth": '0em',
		"borderColour": "#e8e8e8",
		"colourRange": ["#64B966"],
		"backgroundColour": "#fff",
		"landColour": "#e8e8e8",
		"zoom": false,
		countries: [
			{
				"code": country.code,
				"value": 100,
			}
		],
		selectedRegionColour: "#B9DD76",
		selectedRegionBorderColour: "#B9DD76",
		selectedRegions: [
			country.region
		],
		onCountryClick: function(info) {
			window.location.href = '/book/countries/' + info.iso3;
		},
		onCountryOver: util.mapOnCountryOver
	});

	var map = wesCountry.maps.createMap({
		container: '#country-map',
		"borderWidth": '0.1em',
		"borderColour": "#d8d8d8",
		"colourRange": ["#64B966"],
		"backgroundColour": "#fff",
		"landColour": "#e8e8e8",
		"zoom": false,
		countries: [
			{
				"code": country.code,
				"value": 100,
			}
		],
		selectedRegionColour: "#B9DD76",
		selectedRegions: [
			country.region
		],
		onCountryClick: function(info) {
			window.location.href = '/book/countries/' + info.iso3;
		},
		onCountryOver: util.mapOnCountryOver
	});

	map.zoomToCountry(country.code);
}

function updateRegionCompareChart(countryData, foot) {
	var options = chartOptions['chart-region-bar-comparison'];

	var container = document.querySelector(options.container);

	if (!container)
		return;

	//var lastTime = countryData.times[countryData.times.length - 1];
	//var countries = countryData.observations[lastTime];
	var countries = countryData;

	options.series = [];
	options.serieColours = [];

	var colour1 = {
		r: 17,
		g: 132,
		b: 167
	};

	var colour2 = {
		r: 169,
		g: 245,
		b: 188
	};

	for (var i = 0; i < countries.length; i++) {
		var serie = {
			'id': countries[i].code,
			'name': countries[i].name,
			'values': [
				parseFloat(countries[i].value)
			]
		};

		options.series.push(serie);
	}

	options.series.sort(function(a, b) {
		return b.values[0] - a.values[0];
	});

	var country = getCountry().name;

	options.overColour = "#FFBF00";

	for (var i = 0; i < countries.length; i++) {
		options.serieColours.push(wesCountry.makeGradientColour(colour1, colour2, (i / countries.length) * 100).cssColour);
	}

	options.width = container.offsetWidth;
	options.height = container.offsetHeight;

	// Tooltip

	options.events = {
		onmouseover: function(info) {
			selectCountry(null, regionMap.getCountryInfo(info.id));
		}
	}

	options.foot = foot;

	container.innerHTML = '';
	wesCountry.charts.chart(options);
}

////////////////////////////////////////////////////////////////////////////////
//                                AUXILIARY
////////////////////////////////////////////////////////////////////////////////

function loadIndicatorSelect(parameters, selectors) {
	var indicator = parameters["indicator"];
	var selector = selectors['#indicator-select'];

	var options = [];
	var datasource = null;

	var found = false;

	if (indicator != "") {
		var option = document.querySelector('.topic-indicator-select option[value=' + indicator + ']');

		found = option.disabled ? false : true;

		var datasourceSelect = option ? option.parentNode : null;

		options = datasourceSelect.options;
		datasource = datasourceSelect.getAttribute('data-source');
	}

	if (indicator == "" || !found) {
		var option = document.querySelector('.topic-indicator-select option:not([disabled])');
		var datasourceSelect = option ? option.parentNode : null;

		options = datasourceSelect ? datasourceSelect.options : [];
		datasource = datasourceSelect.getAttribute('data-source');
	}

	var length = options.length;

	var selectedIndex = 0;

	selector.innerHTML = '';

	for (var i = 0; i < length; i++) {
		var option = options[i];
		var value = option.value;
		var html = option.innerHTML;
		var title = option.title;
		var disabled = option.disabled;

		// If indicator in query then set as selected
		if (value == indicator)
			selectedIndex = i;

		option = document.createElement('option');
		option.value = value;
		option.innerHTML = html;
		option.title = title;

		if (disabled)
			option.disabled = true;

		selector.appendChild(option);
	}

	if (selectedIndex)
		selector.selectedIndex = selectedIndex;

	selector.setAttribute('data-source', datasource);

	// Data source index

	var options = selectors['#source-select'].options;
	var length = options.length;

	for (var i = 0; i < length; i++) {
		var option = options[i];

		if (option.value == datasource)
			return i;
	}

	return 0;
	//selector.refresh();
}

function loadIndicatorsFromSource(parameters, selectors) {
	var indicator = parameters["indicator"];
	var source = parameters["source"];
	var selector = selectors['#indicator-select'];

	var select = document.querySelector('select[data-source="' + source + '"]');
	var options = select ? select.options : [];

	var length = options.length;

	selector.innerHTML = '';

	var selectedIndex = -1;
	var firstNotDisabled = -1;

	for (var i = 0; i < length; i++) {
		var option = options[i];
		var value = option.value;
		var html = option.innerHTML;
		var title = option.title;
		var disabled = option.disabled;

		if (!disabled && indicator == value)
			selectedIndex = i;

		if (!disabled && firstNotDisabled == -1)
			firstNotDisabled = i;

		option = document.createElement('option');
		option.value = value;
		option.innerHTML = html;
		option.title = title;

		if (disabled)
			option.disabled = true;

		selector.appendChild(option);
	}

	if (length > 0 && (selectedIndex != -1 && firstNotDisabled != -1))
		selector.selectedIndex = selectedIndex != - 1 ? selectedIndex : firstNotDisabled;

	selector.setAttribute('data-source', source);

	selector.refresh();
}

function getDatasourceLink(datasource, datasourceName) {
	return String.format("source: <a href='/book/sources/{0}'>{1}</a>", datasource, datasourceName)
}
/*
function getSourceFromSelectedIndicator(parameters, selectors) {
	var indicator = parameters["indicator"];
	var selector = selectors['#indicator-select'];

	var source = -1;

	if (selector.value == indicator) {
		var sourceOpt = selector.options[selector.selectedIndex].parentNode;

		if (sourceOpt) {
			var sources = selector.querySelectorAll('optgroup');

			if (sources && sources.indexOf)
				source = sources.indexOf(sourceOpt);
		}
	}

	if (source == -1) {
		// We must find a non-disabled option
		var firstEnabledOption = selectors['#source-select'].querySelector('option:not([disabled])');

		if (firstEnabledOption)
			source = firstEnabledOption.index;
	}

	return source;
}
*/
function getCountryRegion() {
	var id = document.getElementById('continent-id').value;
	var name = document.getElementById('continent-name').value;

	return {
		code: id,
		name: name
	};
}

function getCountry() {
	var code = document.getElementById('entity-id').value;
	var name = document.getElementById('country-name').value;

	return {
		"code": code,
		"name": name,
		"region": getCountryRegion()
	}
}

function getRegionStringCode(code) {
	switch(code) {
		case "19":
			return 'americas';
		case "2":
			return 'africa';
		case "150":
			return 'europe';
		case "142":
			return 'asia';
		case "9":
			return 'oceania';
	}

	return '';
}

// Show country info in map and bar chart

function showCountryInfo(info) {
	var visor = regionMap.visor();

	if (!visor)
		return;

	visor.innerHTML = '';

	var left = document.createElement('div');
	left.className = 'left';
	visor.appendChild(left);

	var flag = document.createElement('img');
	left.appendChild(flag);

	flag.className = 'country-flag flag-' + info.id;
	flag.alt = '';
	flag.src = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAB4AAAAeAQMAAAAB/jzhAAAAA1BMVEX///+nxBvIAAAAAXRSTlMAQObYZgAAAAxJREFUeNpjYBiMAAAAlgABjcjBIQAAAABJRU5ErkJggg==";

	var name = document.createElement('span');
	name.innerHTML = info.name;
	name.className = 'name';
	left.appendChild(name);

	var value = document.createElement('span');
	value.innerHTML = info.value;
	value.className = 'value';
	visor.appendChild(value);
}

function selectCountry(e, info) {
	if (!info || !info.value)
		return;

	var selected = document.querySelectorAll('.selected-country');

	for (var i = 0; i < selected.length; i++) {
		var element = selected[i];

		var className = element.getAttribute('class');
		className = className.replace(' selected-country', '');
		element.setAttributeNS(null, 'class', className);
	}

	if (!e)
		e = document.querySelector('.indicator-map #' + info.iso3);

	var className = e.getAttribute('class');
	className += ' selected-country';
	e.setAttributeNS(null, 'class', className);

	var field = "name";

	if (Drupal.settings.landbook.languageCode == "es")
		field = "nombre"
	else if (Drupal.settings.landbook.languageCode == "fr")
		field = "nom"

	showCountryInfo({
		id: info.iso3,
		name: info[field],
		value: info.value
	});

	// Highlight bar

	var bar = document.querySelector('#chart-region-bar-comparison #' + info.iso3);

	if (bar)
		bar.selectBar();
}
