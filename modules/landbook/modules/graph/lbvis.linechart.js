var lbvisLC = (function (args = {}) {
    return {
        series_color: args.colors || ["#1f77b4", "#aec7e8", "#ff7f0e", "#ffbb78", "#2ca02c", "#98df8a", "#d62728", "#ff9896", "#9467bd", "#c5b0d5", "#8c564b", "#c49c94", "#e377c2", "#f7b6d2", "#7f7f7f", "#c7c7c7", "#bcbd22", "#dbdb8d", "#17becf", "#9edae5"],
        selected_indicator: args.indicator || 'WB-SP.RUR.TOTL.ZS',
        indicator_info: {},
        current_indicator: {},
        compared_countries: [args.iso3],
        years: []
    };
});


Array.prototype.contains = function(obj) {
    var i = this.length;
    while (i--) {
	if (this[i] == obj) {
	    return true;
	}
    }
    return false;
};

function loadLineDefaults() {
	//line_selected_indicator_URL;
	table_selected_indicator = line_selected_indicator_URL;
	setDataURLs();
	loadCountriesPerIndicators();
	loadYearsIndicatorCountryCompare();

	current_range_years_selected.length=0;

	$("#lsindicador").find("option[value='"+line_selected_indicator_URL+"']").prop("selected",true);

	setTimeout(function(){
		$("#lscountry").find("option[value='"+current_country_iso3+"']").prop("selected",true);
		var date_ini = years_indicator_country["0"];
		var date_end = years_indicator_country[years_indicator_country.length - 1];
		current_range_years_selected.push(parseInt(date_end),parseInt(date_ini));
		loadLineChart()
		//alert(date_end);
		//current_range_years_selected;
	},600);

}

function loadYearsIndicatorCountryCompare(){
	
	while(years_indicator_country.length > 0) {
	    years_indicator_country.pop();
	}
	
	$.getJSON(query_years_indicator_country_URL, function (data) {
		for(i=0; i < data.results.bindings.length; i++){
			years_indicator_country.push(data.results.bindings[i].year.value);
		}
		
		var iop; //'<option value="0" data-localize="inputs.syear">Select year ...</option>';
		$.each(years_indicator_country, function( i, val ) {
			iop += '<option value="'+val+'">'+val+'</option>';
			//console.log(iop);
		});
		$("#lsperiod_from").html('<option value="0" data-localize="inputs.speriodfrom">From year ...</option>');
		$("#lsperiod_to").html('<option value="0" data-localize="inputs.speriodto">To year ...</option>');
		$("#lsperiod_from, #lsperiod_to").append(iop);
		$(".speriod").append(iop);
	});
}


function loadCountriesPerIndicators(){

	//Vaciamos el array
	info_countries_per_indicator.length = 0;

	$.getJSON(query_coutries_per_indicator_URL, function (data) {
		var iop = '<option value="0" data-localize="inputs.scountry">Select country ...</option>';
		for(i=0; i < data.results.bindings.length; i++){
			
			iop += '<option value="'+data.results.bindings[i].countryISO3.value+'">'+data.results.bindings[i].countryLabel.value+'</option>';
			
			info_countries_per_indicator.push(data.results.bindings[i].countryISO3.value);
			info_countries_per_indicator.push(data.results.bindings[i].countryLabel.value);
		}

		$("#lscountry").append(iop);

		if(iop!=""){
			$("#lscountry").removeClass("cinput-disabled");
			$("#lscountry").prop("disabled", false );
		}

	});

}

 function loadLineChart(){
//## LINE CHART
	
	$("#igraphics .pos_loader_data").removeClass("hddn");
	
	if (table_selected_indicator == "") {
		indicator_id_more_info = line_selected_indicator_URL;
	}else{
		indicator_id_more_info = table_selected_indicator;
	}
	setDataURLs();
	getIndicatorInfo();

	$.getJSON(query_line_URL, function (data) {

		var serie_categories = new Array();
		var serie_values = new Array();
		var serie_value = new Object();
		var first_year = current_range_years_selected[0];
		var last_year = current_range_years_selected[1];
		var num_years = last_year - first_year + 1;
		var _iso3;
		var _value;
		var _year;
		var _source;
		var _sourcen;

		for(i=0; i<num_years; i++){
			serie_categories[i] = first_year + i;
		}
		for(j=0; j<current_compared_countries_iso3.length; j++){
			//Para cada PaГ­s, inicializo la serie a null, recorro valores y si pertenecen al paГ­s y estГЎn dentro del rango de aГ±os correspondiente, pongo el valor en su lugar.
			serie_value.name = setNameCountry(current_compared_countries_iso3[j]);
			serie_value.niso3 = current_compared_countries_iso3[j];
			serie_value.data = new Array();
			serie_value.color = series_color[j]
			for(k=0; k<num_years; k++){
				//inicializo todos los valores de esta serie a null
				serie_value.data[k] = null;
			}
			for(h=0; h<data.results.bindings.length; h++){
				_iso3 = data.results.bindings[h].countryISO3.value; 
				_year = parseFloat(data.results.bindings[h].year.value);

				if((_iso3 == serie_value.niso3)&&(_year <= last_year)&&(_year >= first_year)){
					serie_value.data[_year - first_year] = parseFloat(data.results.bindings[h].value.value);
				}
			}
			//console.log("serie_value " + j + " =");
			//console.log(serie_value);
			serie_values[j] = serie_value;
			serie_value = {};
		}

		var chart_type = "column";
		if(serie_values[0].data.length != 1) chart_type = "line";

		var lineChart_init;
		var $divIgraphics = $('#wrapper-igraphics');
		var CharLineOp = {
		  chart: {
		  	  type: chart_type,
			  backgroundColor: "transparent",
			  renderTo: $divIgraphics[0],
			},

			credits:{
				enabled:false
			},

			title: {
				text: '<span class="m-s-top m-xs-bottom txt-sh-dark txt-l">'+indicator_info["0"].name+'</span>',
				useHTML: true,
				x: -20 //center
			},
			subtitle: {
				text: '<a href="'+indicator_info["0"].datasetURL+'" target="_blank" class="txt-l">'+indicator_info["0"].datasetLabel+'</a> (<a href="'+indicator_info["0"].sourceOrgURL+'" target="_blank" class="txt-l">'+indicator_info["0"].sourceOrgLabel+'</a>)',
				useHTML: true,
				x: -20
			},
			xAxis: {
				categories: serie_categories
			},
			yAxis: {
				title: {
					text: current_indicator_name
				}
				// plotLines: [{
				//     value: 0,
				//     width: 1,
				//     color: '#A3C642'
				// }]
			},
			tooltip: {
				//valueSuffix: 'В°C'
			},
			legend: {
				//layout: 'vertical',
				align: 'center',
				verticalAlign: 'bottom',
				borderWidth: 0
			},
			series: serie_values
		}

		lineChart_init = new Highcharts.Chart(CharLineOp);
		$("#igraphics .pos_loader_data").addClass("hddn");
	});
}



// UI bindings
var $ = jQuery.noConflict();
$(document).ready(function() {
    //Seccion compare
    $(document).delegate("#lsindicador", "change", function(){
		if($(this).val()!=0){
			$("#lscountry").html("");
			$("#lscountry").removeClass("cinput-disabled");
			$("#lscountry").prop( "disabled", false );

			$("#lscountry").val(0);
			
			$(".speriod").val(0);
			$(".speriod").addClass("cinput-disabled");
			$(".speriod").prop( "disabled", true );

			table_selected_indicator = $(this).val();
			line_selected_indicator_URL = $(this).val();
			setDataURLs();
			loadCountriesPerIndicators();
			loadYearsIndicatorCountryCompare();

		}else{
			$("#lscountry").val(0);
			$("#lscountry").addClass("cinput-disabled");
			$("#lscountry").prop( "disabled", true );

			$(".speriod").val(0);
			$(".speriod").addClass("cinput-disabled");
			$(".speriod").prop( "disabled", true );

		}
	});

	$(document).delegate("#lscountry", "change", function(){

		if($(this).val()!=0){
			$(".speriod").prop( "disabled", false );
			$(".speriod").removeClass("cinput-disabled");
		}else{
			$(".speriod").val(0);
			$(".speriod").prop( "disabled", true );
			$(".speriod").addClass("cinput-disabled");
		}
	});

	//Agregamos el comparador si todos los campos estГЎn correctamente rellenados.
	$(document).delegate(".cbtn-ladd-compare", "click", function(e){
		e.preventDefault();

		if($("#lsperiod_from").val()!=0 && $("#lsperiod_to").val()!=0) {
			//console.log("ok");
			var newCountry = $("#lscountry").val();
			var dateFrom = parseInt($("#lsperiod_from").val());
			var dateTo = parseInt($("#lsperiod_to").val());
			//console.log(newCountry);
			if(current_compared_countries_iso3 == newCountry) {
				alert("This country is already selected!");
				return false;
			}

			current_range_years_selected.length = 0;
			current_indicator_name = $("#lsindicador").find("option:selected").text();
			current_compared_countries_iso3.push(newCountry);
			
			if(dateFrom > dateTo) {
				current_range_years_selected.push(dateTo);
				current_range_years_selected.push(dateFrom);
			}else{
				current_range_years_selected.push(dateFrom);
				current_range_years_selected.push(dateTo);
			}
			
			var label = '<span class="label-compare displayib fos txt-s">'+$("#lscountry option:selected").text()+' <a href="#" class="close-label" data-iso3="'+$("#lscountry option:selected").val()+'"><img src="img/close-label.svg"></a></span>';
			$("#labels-compare").append(label)

			if($("#labels-compare > span.label-compare").length > 0){
				$("span.remove-text").removeClass("hddn");
			}

			setDataURLs();
			loadLineChart();

		}else{
			alert("Complete all data to load results");
		}
	});

	$(document).delegate(".close-label", "click", function(e){
		e.preventDefault();
		var stringToArray = current_compared_countries_iso3;
		var removeItem = $(this).attr("data-iso3");
		stringToArray = jQuery.grep(stringToArray, function(value) {
			return value != removeItem;
		});
        //Refrescamos el array existente donde se aГ±aden
        $(this).parent().remove();

        if($("#labels-compare > span.label-compare").length == 0){
			$("span.remove-text").addClass("hddn");
		}

        current_compared_countries_iso3 = stringToArray;
        setDataURLs();
		loadLineChart();
	})



});

//})();


