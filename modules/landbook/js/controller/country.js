(function($) {
var countryCode=Drupal.settings.landbook.countryCode;
var dataLand=Drupal.settings.landbook.data_land;


function initPiechart(){
	$('#wrapper-piechart').highcharts({
	    chart: {
	        plotBackgroundColor: null,
	        plotBorderWidth: null,
	        plotShadow: false,
	        type: 'pie',
	        backgroundColor: '#F8F8F8',
	    },
	    title: {
				text: '<span class="displayb txt-c">Land Use</span><div class="txt-m displayb txt-c">Total land area: ' + 10000 + '  (1000 Ha) <span class="displayb c-g40">' + 2012 + '</span></div>',
				useHTML: true
			},
	    tooltip: {
	        pointFormat: '{series.name}: <b>{point.percentage:.1f}%</b>'
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
	        name: '',
	        colorByPoint: true,
	        data: [{
	            name: 'Arable Land',
	            y: 56.33,
	            color : "#8c6d31",
	        }, {
	            name: 'Permanent crops',
	            y: 24.03,
	            sliced: true,
	            selected: true,
	            color : "#e7ba52",
	        }, {
	            name: 'Permanent pastures and meadows',
	            y: 10.38,
	            color : "#b5cf6b",
	        }, {
	            name: 'Forest Land',
	            y: 4.77,
	            color : "#637939",
	        }, {
	            name: 'Other',
	            y: 2,
	            color : "#9c9ede",
	        }]
	    }]
	});
}

function initSpiderchart(){
	$('#wrapper-spiderchart').highcharts({

	    chart: {
	    	backgroundColor: '#F8F8F8',
	        polar: true,
	        type: 'line',
	    },

	    title: {
	        text: 'Main Indexes',
	        x: -80
	    },

	    pane: {
	        size: '70%'
	    },

	    xAxis: {
	        categories: ['SIGI(2014)', 'GINI index (2012)', 'HDI (2014)', 'GHI (2015)'],
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
	        align: 'right',
	        verticalAlign: 'top',
	        y: 70,
	        layout: 'vertical'
	    },

	    series: [{
	        name: 'Name',
	        data: [81, 61, 67, 85],
	        pointPlacement: 'on'
	    }]

	});

}

function initMapTop(){
	$('#mapDiv').highcharts('Map', {	  
	    chart: {
	      backgroundColor: '#ffffff',
	      margin: 0,

	    },
		
		credits:{
			enabled:false
		},
		  
	    title: {
	      text: ''
	    },
	    mapNavigation: {
	      enabled: true,
	      buttonOptions: {
	          theme: {
	              fill: 'white',
	              'stroke-width': 1,
	              stroke: 'silver',
	              r: 0,
	              states: {
	                  hover: {
	                      fill: '#79B042'
	                  },
	                  select: {
	                      stroke: '#039',
	                      fill: '#bada55'
	                  }
	              }
	          },
	          verticalAlign: 'top'
	      },
	      enableMouseWheelZoom: false,
	      enableDoubleClickZoom: false,
	      buttons: {
	          zoomIn: {
	              y: 20,
	              x: 20
	          },
	          zoomOut: {
	              y: 50,
	              x: 20
	          }
	      }
	    },

	    colorAxis: {
	      // min: data_value_min,
	      // max: data_value_max,
	      minorTickLength: 0,
	      //type: 'logarithmic',
	      maxColor: "#45551A",
	      minColor: "#D9ED7E"
	    },

	    series: [{
	      data: [countryCode],
	      allowPointSelect: true,
	      nullColor: '#bbd6d8',
	      borderColor: 'white',
	      mapData: map_data,
	      joinBy: ['id', 'code'],
	      name: '',
	      states: {
	        hover: {
	          color: '#BADA55'
	        },
	        select: {
	          color: '#B1D748'
	          //borderColor: '#F5A623',
	          //borderWidth: 2
	        }
	      },
	      tooltip: {
	        pointFormat: '{point.name} <b>' + '{point.value}'.replace(/\B(?=(\d{3})+(?!\d))/g, ",") + '</b>',
	        //valueSuffix: '/kmВІ'
	      }
	    }]

	});
	$('#mapDiv').highcharts().get(countryCode).select();
	$('#mapDiv').highcharts().get(countryCode).zoomTo();
	$('#mapDiv').highcharts().mapZoom(3);
}

function initMapData(){
	$('#wrapper-mapping').highcharts('Map', {
	    chart: {
	      backgroundColor: '#ffffff',
	      margin: 0,

	    },
		
		credits:{
			enabled:false
		},
		  
	    title: {
	      //text: '<p class="m-s-top m-xs-bottom txt-sh-dark displayb txt-c">'+indicator_info["0"].name+' ('+map_current_year+')</p><p class="txt-s txt-sh-dark txt-c"><a href="'+indicator_info["0"].datasetURL+'" target="_blank">'+indicator_info["0"].datasetLabel+'</a> (<a href="'+indicator_info["0"].sourceOrgURL+'" target="_blank">'+indicator_info["0"].sourceOrgLabel+'</a>)</p>',
	      text:'',
	      useHTML: true,
	    },

	    mapNavigation: {
	      enabled: true,
	      buttonOptions: {
	          theme: {
	              fill: 'white',
	              'stroke-width': 1,
	              stroke: 'silver',
	              r: 0,
	              states: {
	                  hover: {
	                      fill: '#79B042'
	                  },
	                  select: {
	                      stroke: '#039',
	                      fill: '#bada55'
	                  }
	              }
	          },
	          verticalAlign: 'top'
	      },
	      enableMouseWheelZoom: false,
	      enableDoubleClickZoom: false,
	      buttons: {
	          zoomIn:{
	              y: 20,
	              x: 20
	          },
	          zoomOut:{
	              y: 50,
	              x: 20
	          }
	      }
	    },

	    colorAxis: {
	      min: 0,
	      max: 100,
	      minorTickLength: 0,
	      //type: 'logarithmic',
	      maxColor: "#45551A",
	      minColor: "#D9ED7E"
	    },

	    series: [{
	      data: [],
	      allowPointSelect: true,
	      nullColor: '#bbd6d8',
	      borderColor: 'white',
	      mapData: map_data,//Highcharts.maps['custom/world'],
	      joinBy: ['id', 'code'],
	      name: ''/*indicator_info["0"].name*/, //current_indicator_name,
	      states: {
	        hover: {
	          color: '#F5A623'
	        },
	        select: {
	          color: '#F5A623',
	          //borderColor: '#F5A623',
	          //borderWidth: 2
	        }
	      },
	      tooltip: {
	        pointFormat: '{point.name} <b>' + '{point.value}'.replace(/\B(?=(\d{3})+(?!\d))/g, ",")+' '+''/*indicator_info["0"].unit*/+'</b>',
	        //valueSuffix: '/kmВІ'
	      }
	    }]

	 });
}

initPiechart();
initMapTop();
initSpiderchart();
initMapData();


})( jQuery );