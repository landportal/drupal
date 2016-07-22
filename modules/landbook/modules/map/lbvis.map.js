
var lbvisMap = (function (args = {}) {
    var ISO3 = args.iso3;
    return {
        current_year: args.year || 2014,
        current_indicator: {},
        selected_indicator: args.indicator || 'FAO-23045-6083',
        years: []
    };

});


//Inicializamos el mapa segun el indicador por defecto facilitado: WB-SP.RUR.TOTL.ZS (Rural population)
function loadMapDefaults() {
    $("select#msindicator option").each(function() {
	var indicatorID = $(this).val();
	if(indicatorID === "WB-SP.RUR.TOTL.ZS") {
	    $(this).prop("selected",true);
	    LBM.selected_indicator = $(this).val();
	    loadYearsIndicatorMap();
	    setTimeout(function(){
		$("select#msyear").prop('selectedIndex', 1);
		LBM.current_indicator.name = $("select#msindicator").find("option:selected").text();
		LBM.current_year = $("select#msyear").val();
		//setDataURLs();
		loadMapChart();
	    },600);
	} 
    });
}


function loadYearsIndicatorMap(){
    LBM.years = [];
    var query_url = LBD.sparqlURL(LBD.query_years_indicator_country(LBM.selected_indicator));
    //console.log('LBM YIM', LBD.query_years_indicator_country(LBM.selected_indicator));
    $.getJSON(query_url, function (data) {
	for(i=0; i < data.results.bindings.length; i++){
	    LBM.years.push(data.results.bindings[i].year.value);
	}

	var miop;
	$.each(LBM.years, function( i, val ) {
	    miop += '<option value="'+val+'">'+val+'</option>';
	    //console.log(iop);
	});
	$("#msyear").html('<option value="0" data-localize="inputs.syear">Select year ...</option>');
	$("#msyear").append(miop);
	if(miop!="") {
	    $("#msyear").removeClass("cinput-disabled");
	    $("#msyear").prop( "disabled", false );
	}
    });
}



function loadMapChart(){
    //#Mapping graph
    $("#maparea .pos_loader_data").removeClass("hddn");

    //indicator_id_more_info = map_selected_indicator_URL;
    //setDataURLs();
    getIndicatorInfo(LBM.selected_indicator, LBM);
    
    var query_url = LBD.sparqlURL(LBD.query_map_chart(LBM.selected_indicator));
    $.getJSON(query_url, function (data) {

	$(".tit-mapping").html('<p class="m-s-top m-xs-bottom txt-sh-dark displayb txt-c fos">'+LBM.current_indicator.name+' ('+LBM.current_year+')</p><p class="txt-sh-dark txt-c fos"><a href="'+LBM.current_indicator.datasetURL+'" target="_blank">'+LBM.current_indicator.datasetLabel+'</a> (<a href="'+LBM.current_indicator.sourceOrgURL+'" target="_blank">'+LBM.current_indicator.sourceOrgLabel+'</a>)</p>');

	//console.log(data.results.bindings[i].countryISO3.value);
	//console.log(data);
	var data_values = new Array();
	var data_value_min;
	var data_value_max;
	for(i=0; i < data.results.bindings.length; i++){
	    if(data.results.bindings[i].year.value == LBM.current_year){
		var data_value = parseFloat(data.results.bindings[i].value.value);
                // TODO FIX: use damnit min/max fx to do that!
		if ((data_value>data_value_max)||(data_value_max == null)){
		    data_value_max = data_value;
		}
		if ((data_value<data_value_min)||(data_value_min == null)){
		    data_value_min = data_value;
		}
		data_values.push({code:data.results.bindings[i].countryISO3.value, value:data_value});
	    }
	}

	$('#wrapper-mapping').highcharts('Map', {
	    chart: {
	        backgroundColor: '#ffffff',
	        margin: 0,
	    },	    
	    credits:{
		enabled:false
	    },	    
	    title: {
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
	        min: data_value_min,
	        max: data_value_max,
	        minorTickLength: 0,
	        //type: 'logarithmic',
	        maxColor: "#45551A",
	        minColor: "#D9ED7E"
	    },
	    series: [{
	        data: data_values,
	        allowPointSelect: true,
	        nullColor: '#bbd6d8',
	        borderColor: 'white',
	        mapData: map_data,//Highcharts.maps['custom/world'],
	        joinBy: ['id', 'code'],
	        name: LBM.current_indicator.name, //current_indicator_name,
	        states: {
	            hover: {
	                color: '#F5A623'
	            },
	            select: {
	                color: '#F5A623'
	            }
	        },
	        tooltip: {
	            pointFormat: '{point.name} <b>' + '{point.value}'.replace(/\B(?=(\d{3})+(?!\d))/g, ",")+' '+LBM.current_indicator.unit+'</b>'
	        }
	    }]
	});
	$("#maparea .pos_loader_data").addClass("hddn");
    });
}



//## Location map ##//
$('#wrapper-map-location').highcharts('Map', {	
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
	data: [],
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
	    //valueSuffix: '/km?'
	}
    }]

});



//## MAPPING EVENTS
$(document).ready(function() {

    $(document).delegate("#msindicator", "change", function(e){
	e.preventDefault();
	if($(this).val()!=0){
	    $("#msyear").html("");
	    $("#msyear").removeClass("cinput-disabled");
	    $("#msyear").prop( "disabled", false );
	    LBM.current_indicator.name = $(this).find("option:selected").text();
	    LBM.selected_indicator = $(this).val();
	    //setDataURLs();
	    loadYearsIndicatorMap();
	}else{
	    $("#msyear").val(0);
	    $("#msyear").addClass("cinput-disabled");
	    $("#msyear").prop( "disabled", true );
	}
    });

    $(document).delegate("#msyear", "change", function(e){
	e.preventDefault();
	if($(this).val()!=0){
	    LBM.current_year = $(this).val();
	    //setDataURLs();
	    loadMapChart();
	}
    });

});
