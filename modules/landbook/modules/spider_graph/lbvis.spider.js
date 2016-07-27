
'use strict';
var lbvisSpider = (function (args = {}) {
    var LBVIS = args.vis;
    var _options = {
        target: args.target || '#wrapper-spiderchart'
    };
    var categories_names = [];
    var chart_series = [];

    var _loadData = function () {
        var query_url = LBVIS.DATA.sparqlURL(LBVIS.DATA.queries.spider_chart);
        return $.getJSON(query_url, function (data) {
            // Un-cleaned , mad code to parse serie data
            // TODO: re-do :)
	    var chart_series_labels = data.head.vars;
	    var serie_value;
	    var serie_year;
	    
	    for(var i=0; i<chart_series_labels.length; i++){
	        var serie_name;
	        switch (chart_series_labels[i]){
	        case "sigiTo100":
	            serie_name = "SIGI ("+
                        data.results.bindings[0][chart_series_labels[2]].value+")";
		    break;
	        case "giniTo100":
 	            serie_name = "GINI Index ("+
                        data.results.bindings[0][chart_series_labels[5]].value+")";
		    break;
	        case "hdiTo100":
 	            serie_name = "HDI ("+
                        data.results.bindings[0][chart_series_labels[8]].value+")";
		    break;
	        case "ghiTo100":
 	            serie_name = "GHI ("+
                        data.results.bindings[0][chart_series_labels[11]].value+")";
		    break;
	        default:
		    serie_name = "notused";
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
            // /Uncleaned

        });
    };
    var drawSpider = function () {
	var CharSpiderOp = {
	    chart: {
		polar: true,
		type: 'line',
		renderTo: $(_options.target)[0],
		backgroundColor: 'transparent'
	    },
	    credits: {
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
	    series: [{
		showInLegend:false,
		name: setNameCountry(LBVIS.ISO3),
		data: chart_series,
		pointPlacement: 'on'
	    }]
	};
        return new Highcharts.Chart(CharSpiderOp);
    };

    // Public methods
    return {
        init: function () {
            _loadData().done(function () {
                drawSpider();
            });
        }
    };
});


