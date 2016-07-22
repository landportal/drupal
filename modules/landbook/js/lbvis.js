// Main LB Visualization 
'use strict';

var lbvis = (function (args = {}) {
    var options = {
        lod: args.lod_url || 'data.landportal.info'
    };
    var lod = {
        country_url: options.lod + 'geo/'
    };
    return {
        // Public vars
        ISO3: args.iso3 || 'VNM',
        type: args.type || 'table',
        options: options,
        lod: lod,
        // Shared data / sort of internal cache
        countries: [],
        indicator_info: [],
        country_indicators: [],
        // Public methods
        init: function () {
            //console.log('init app');
        }
    };
});

function getIndicatorInfo(indicator, ptr) {
    LBV.indicator_info = [];
    var query_get_indicator_info_URL = LBD.sparqlURL(LBD.query_get_indicator_info(indicator));
    //console.log('getIndicatorInfo', indicator, query_get_indicator_info_URL);
    $.getJSON(query_get_indicator_info_URL, function (data) {
	for(var i=0; i < data.results.bindings.length; i++){
	    LBV.indicator_info.push({
		'name':data.results.bindings[i].indicatorLabel.value,
		'desc':data.results.bindings[i].indicatorDescription.value,
		'unit':data.results.bindings[i].indicatorUnit.value,
		'datasetURL':data.results.bindings[i].datasetURL.value,
		'datasetLabel':data.results.bindings[i].datasetLabel.value,
		'sourceOrgURL':data.results.bindings[i].sourceOrgURL.value,
		'sourceOrgLabel':data.results.bindings[i].sourceOrgLabel.value,
	    });
	}
        //console.log('LBV getInfo: ' + indicator, LBV.indicator_info);
        if (ptr) { ptr.current_indicator = LBV.indicator_info[0]; }
    });
}


// TODO: global: countrieNameIso3
function loadCountriesIso3() {
    var query_countries_iso3_URL = LBD.sparqlURL(LBD.queries.countries_iso3);
    $.getJSON(query_countries_iso3_URL, function (data) {
	for(var i=0; i < data.results.bindings.length; i++){
	    LBV.countries.push({'name':data.results.bindings[i].countryLabel.value,'iso3':data.results.bindings[i].countryISO3.value,'url':data.results.bindings[i].countryURL.value});
	}
    });
}

// TODO globals:
// info_country_indicators
// global_select_indicators
// FIX: doing ui stuff here? / split up
function set_country_indicators() {
    var query_country_indicators_URL = LBD.sparqlURL(LBD.queries.country_indicators);
    //console.log(query_country_indicators_URL);
    $.getJSON(query_country_indicators_URL, function (data) {
	for(var i=0; i < data.results.bindings.length; i++){
	    var indicator = data.results.bindings[i].indicatorLabel.value;
	    var searchfor = 'wb-lgaf';
	    if(indicator.toLowerCase().indexOf(searchfor) === -1){
                var ind = {
                    'name': data.results.bindings[i].indicatorLabel.value,
                    'URL':  data.results.bindings[i].indicatorURL.value
                };
                ind.id = ind.URL.slice(ind.URL.lastIndexOf('/') + 1);
                //console.log(data.results.bindings[i]);
		LBV.country_indicators.push(ind);
		LBV.country_indicators_select += '<option value="'+ind.id+'">'+truncateString(ind.name, 40, ' ', '...')+'</option>';
	    }
	}
        // TODO: FIX / WTF
        // This is changing both mapping AND table UI
	//Cargamos los indicadores (TODOS CUIDADO)
	var $selIndicator = $(".sindicator, .msindicator");
	$selIndicator.html('');
	$selIndicator.append(LBV.country_indicators_select);
    });
}
