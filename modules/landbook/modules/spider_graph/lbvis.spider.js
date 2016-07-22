

function loadSpiderChart(){
    var query_url = LBD.sparqlURL(LBD.queries.spider_chart);
    //#Spider chart
    $.getJSON(query_url, function (data) {
	//console.log("Spider");
	//console.log(data);
	var chart_series = new Array();
	var chart_series_labels = data.head.vars;
	var serie_name;
	var serie_value;
	var serie_year;
	var categories_names = new Array();
	
	for(i=0; i<chart_series_labels.length; i++){
	    switch (chart_series_labels[i]){
	    case "sigiTo100":	serie_name = "SIGI "+"("+data.results.bindings[0][chart_series_labels[2]].value+")";
		break;
		// case "sigiYear":	serie_year = "("+data.results.bindings[0][chart_series_labels[i]].value+")";
		// 					break;
	    case "giniTo100": 	serie_name = "GINI Index "+"("+data.results.bindings[0][chart_series_labels[5]].value+")";
		break;
		// case "giniYear":	serie_year = chart_series_labels[i].value;
		// 					break;
	    case "hdiTo100": 	serie_name = "HDI "+"("+data.results.bindings[0][chart_series_labels[8]].value+")";
		break;
		// case "hdiYear":		serie_year = chart_series_labels[i].value;
		// 					break;
	    case "ghiTo100": 	serie_name = "GHI "+"("+data.results.bindings[0][chart_series_labels[11]].value+")";
		break;
		// case "ghiYear":		serie_year = chart_series_labels[i].value;
		// 					break;
	    default:			serie_name = "notused";
		break;
	    }

	    if(serie_name!="notused"){
		categories_names.push(serie_name);
		if(data.results.bindings[0][chart_series_labels[i]]!=undefined){
		    serie_value = data.results.bindings[0][chart_series_labels[i]].value;
		}
		else{
		    serie_value = null;
		}
		if(data.results.bindings[0] != undefined){
		    chart_series.push(parseFloat(serie_value));
		}
		else{
		    //console.log("pusheando null...");
		    chart_series.push(null);
		}
	    }
	}
	//alert(chart_series);
	var spiderChart_init;
	var $divSpider = $('#wrapper-spiderchart');
	var CharSpiderOp = {
	    chart: {
		polar: true,
		type: 'line',
		renderTo: $divSpider[0],
		backgroundColor: 'transparent'
	    },

	    credits:{
		enabled:false
	    },

	    title: {
		text: '<div class="txt-m displayb txt-c">Main Indexes</div>',
		useHTML: true
	    },

	    pane: {
		size: '80%'
	    },

	    xAxis: {
		categories: categories_names,
		tickmarkPlacement: 'on',
		lineWidth: 0
	    },

	    yAxis: {
		gridLineInterpolation: 'polygon',
		lineWidth: 0,
		min: 0
	    },

	    tooltip: {
		shared: true,
		pointFormat: '<span style="color:{series.color}">{series.name}: <b>{point.y:,.0f}</b><br/>'
	    },

	    legend: {
		// align: 'right',
		//verticalAlign: 'top',
		//y: 70,
		//layout: 'vertical'
	    },

	    series: [{
		showInLegend:false,
		name: setNameCountry(LBV.ISO3),
		data: chart_series,
		pointPlacement: 'on'
	    }]
	};

	spiderChart_init = new Highcharts.Chart(CharSpiderOp);
    });
}

