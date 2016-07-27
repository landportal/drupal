/*
 * LB vis. Pie chart
 *
NOTE from (original) dev.

Lot of hardcoded stuff to remove
Make this truely dynamic. Need to fix the query

 */

'use strict';
var lbvisPie = (function (args = {}) {
    var LBVIS = args.vis;
    var _options = {
        target: args.target || '#wrapper-piechart',
        title: 'Land Use',
        // (future) DO NOT work yet, all was hardcoded...
        indicators: {
            main: 'FAO-6601-5110',      // TotalLandHA
            chart: ['FAO-6621-5110', 'FAO-6650-5110', 'FAO-6655-5110', 'FAO-6661-5110']
        },
        year: args.target || '2014',
        // FIX: This is all wrong, it depend on the # of indicators and should be generated
        colors: args.color || ['#8c6d31', '#e7ba52', '#b5cf6b', '#637939', '#9c9ede']
    };

    var _data = {
        main: {},
        series: []
    };
    var chart_series = [];
    // TODO: fix me BADBADBAD
    var STATIC_INDICATOR_NAME = {
        'ArableLandPer':        'Arable Land',
        'PermanentCropsPer':    'Permanent crops',
        'PermanentPasturesAndMedowsPer': 'Permanent pastures and meadows',
        'ForestLandPer':        'Forest Land'
    };

    var _loadData = function () {
        var query_url = LBVIS.DATA.sparqlURL(LBVIS.DATA.queries.pie_chart);
        return $.getJSON(query_url, function (data) {
            _data.series = [];
            for (var ind in data.results.bindings[0]) {
                var serie = {
                    id: ind,
                    // TODO get it from LOD! WTF
                    name: (ind == 'other' ? 'Other' : STATIC_INDICATOR_NAME[ind]),
                    color: _options.colors[_data.series.length],
                    y: parseFloat(data.results.bindings[0][ind].value)
                };
                if (ind === 'year') {
                    _options.year = serie.y;
                    continue;
                }
                if (ind === 'mainInd') {
                    _data.main = {
                        name: _options.indicators.main,
                        value: serie.y
                    };
                    continue;
                }
                _data.series.push(serie);
            }
        });
    };
    var _chartTitle = function () {
        //.replace(/\B(?=(\d{3})+(?!\d))/g, ",");
        // TODO: fix me, too much static/hardcoded stuff!
        return '<span class="displayb txt-c">'+_options.title+'</span><div class="txt-m displayb txt-c">@@@' + _data.main.name + ': ' + _data.main.value + ' (unit)@@@<span class="displayb c-g40">' + _options.year + '</span></div>';
    };
    var _drawChart = function () {
        //console.log('Draw Pie', _data.series);
	var CharPieOp = {
	    chart: {
		plotBackgroundColor: null,
		plotBorderWidth: null,
		renderTo: $(_options.target)[0],
		plotShadow: false,
		type: 'pie',
		backgroundColor: 'transparent'
	    },
	    credits:{
		enabled:false
	    },
	    title: {
		text: _chartTitle(),
		useHTML: true
	    },
	    tooltip: {
		pointFormat: '{series.name}<b>{point.percentage:.1f}%</b>'
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
		data: _data.series
	    }]
	};
	return new Highcharts.Chart(CharPieOp);
    };

    // Public interfaces
    return {
        init: function () {
            _loadData().done(function () {
                _drawChart();
            });
        }
    };
});
