'use strict';

function loadPieChart(){
    var query_url = LBD.sparqlURL(LBD.queries.pie_chart);
    $.getJSON(query_url, function (data) {
	var chart_series = new Array();
	var chart_series_labels = data.head.vars;
	var serie_name;
	var serie_color;
        
	for(var i=0; i<chart_series_labels.length-2; i++){
	    switch (chart_series_labels[i]){
	    case "ArableLandPer":
 		serie_name = "Arable Land";
		serie_color = "#8c6d31";
		break;
	    case "PermanentCropsPer":
 		serie_name = "Permanent crops";
		serie_color = "#e7ba52";
		break;
	    case "PermanentPasturesAndMedowsPer":
 	        serie_name = "Permanent pastures and meadows";
		serie_color = "#b5cf6b";
		break;
	    case "ForestLandPer":
 		serie_name = "Forest Land";
		serie_color = "#637939";
		break;
	    case "OtherPer":
 		serie_name = "Other";
		serie_color = "#9c9ede";
		break;
	    default:
		serie_name = "UNKNOWN_SERIE_NAME_ERROR";
		serie_color = "#000000";
		break;
	    }
	    chart_series.push({name:serie_name, y:parseFloat(data.results.bindings[0][chart_series_labels[i]].value), color:serie_color});
	}
	var country_land_area = data.results.bindings[0][chart_series_labels[chart_series_labels.length-2]].value;
	var country_land_area_str = country_land_area.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
	var datatime = new Date(data.results.bindings[0][chart_series_labels[chart_series_labels.length-1]].value);
	var data_year = datatime.getFullYear();
	//console.log(chart_series);

	//## Pie chart
	var pieChart_init;
	var $divPie = $('#wrapper-piechart');
	var CharPieOp = {
	    chart: {
		plotBackgroundColor: null,
		plotBorderWidth: null,
		renderTo: $divPie[0],
		plotShadow: false,
		type: 'pie',
		backgroundColor: 'transparent'
	    },
	    credits:{
		enabled:false
	    },
	    title: {
		text: '<span class="displayb txt-c">Land Use</span><div class="txt-m displayb txt-c">Total land area: ' + country_land_area_str + '  (1000 Ha) <span class="displayb c-g40">' + data_year + '</span></div>',
		useHTML: true
	    },
	    tooltip: {
		pointFormat: '{series.name}: <b>{point.percentage:.1f}%</b>'
	    },
	    legend: {
	        itemWidth: 300
	    },
	    plotOptions: {
		pie: {
		    allowPointSelect: true,
		    cursor: 'pointer',
		    dataLabels: {
			enabled: false
		    },
		    showInLegend: true
		}
	    },
	    series: [{
		name: ' ',
		colorByPoint: true,
		data: chart_series
	    }]
	};

	pieChart_init = new Highcharts.Chart(CharPieOp);
    });
}
