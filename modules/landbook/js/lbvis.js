/*
 * Land Portal visualizations for the Land Book
 *
 * The original prototype of those visualizations was produced by Simbiosys.
 * This is a first rewrite as a JS app rather than dirty script.
 *
 * Author: Jules Clement <jules@ker.bz>
 */
'use strict';

/*
 * lbvis - main Object
 *
 * Prototype:
 *   new lbvis(options);
 * Arguments:
 *   options    - configuration hash
 *      iso3    - MANDATORY - country iso 3 letters code
 * Example:

 var VIS = new lbvis({iso3: 'VNM'});
 VIS.init();

*/
var lbvis = (function (args = {}) {
    var options = args.options || {},   // Optional arguments
        _countries = [],                // Holds the countries list
        //_countries_indicators = [],   // Holds indicators available for this country
        _indicators = [],               // Holds indicators list
        _indicators_info = [],          // Holds indicators details
        // Data connector
        country = null;
    var _DATA = args.data || new lbvisDATA({iso3: args.iso3});

    // This pre-load all countries in a hash
    var _loadCountries = function () {
        _countries = [];
        var query_countries_iso3_URL = _DATA.sparqlURL(_DATA.queries.countries_iso3);
        return $.getJSON(query_countries_iso3_URL, function (data) {
	    for(var i=0; i < data.results.bindings.length; i++){
	        _countries.push({
                    name: data.results.bindings[i].countryLabel.value,
                    iso3: data.results.bindings[i].countryISO3.value,
                    url:  data.results.bindings[i].countryURL.value
                });
	    }
        });
    };

    // Loads all available indicators for a country
    var _loadIndicators = function () {
        var query_country_indicators_URL = _DATA.sparqlURL(_DATA.queries.country_indicators);
        //console.log(query_country_indicators_URL);
        return $.getJSON(query_country_indicators_URL, function (data) {
            data.results.bindings.forEach(function (item) {
                var i = {};
                Object.keys(item).forEach(function (prop) { i[prop] = item[prop].value; });
                i.ID = i.indicatorURL.replace(_DATA.lod.uri.indicator,'');
                // TODO: bad! why are we filtering WB-LGAF here? it should *E*LGAF...
	        if(i.ID !== 'WB-LGAF') {
                    _indicators.push(i);
                }
            });
        });
    };

    var _loadIndicatorInfo = function (ID) {
        //_indicators_info = [];
        var query_get_indicator_info_URL = _DATA.sparqlURL(_DATA.query_get_indicator_info(ID));
        return $.getJSON(query_get_indicator_info_URL, function (data) {
	    data.results.bindings.forEach(function (indicator) {
                var i = { ID: ID };
                Object.keys(indicator).forEach(function (prop) {
                    i[prop] = indicator[prop].value;
                });
                _indicators_info[ID] = i;
                //console.log(ID, i);
            });
        });
    };

    return {
        // Public vars
        defers: {},
        ISO3: args.iso3 || 'VNM',
        DATA: _DATA,
        // Shared data / sort of internal cache
        countries: function () { return _countries; },
        indicators: function () { return _indicators; },
        indicators_info: function () { return _indicators_info; },

        // Public methods
        init: function () {
            // TODO: use defer or proper async mecanism!
            this.defers.countries = _loadCountries();
            this.defers.indicators = _loadIndicators();
        },
        getIndicatorInfo: function (indicator) {
            console.log('FIX ME / bad caching / defers');
            // one possible way, cache every indicator_info defer
            if (!_indicators_info[indicator]) {
                this.defers.indicator_info = _loadIndicatorInfo(indicator);
            }
            return _indicators_info[indicator];
        },
        getOptionsIndicators: function (id) {
            var options = '<option data-localize="inputs.indicators">Select an indicator...</option>';
            _indicators.forEach(function (indicator) {
                var selected = '';
                if (id && indicator.ID == id) selected = ' selected="selected"';
                options += '<option value="'+indicator.ID+'"'+selected+'>'
                    + truncateString(indicator.indicatorLabel, 40, ' ', '...')
                    +'</option>';
            });
            return options;
        }
    };
});


// TODO: Cache this globally so we never request twice the same indicator name
// Check: maybe cheaper to fetch all indicators details at once (less queries back n' forth to sparql)
// Note for LP: this data should be directly hard-baked by drupal in a (very dense) JS hash
// It should already include all the localization for inficators name, desc an so on
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
