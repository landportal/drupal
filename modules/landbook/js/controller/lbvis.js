/*(function ($) {
  Drupal.behaviors.landbook = {
    attach: function(context) {
       




        initMapTop();
        loadPieChart();
        loadMapChart();   
        loadSpiderChart();
        loadLineChart();
    }
  }

})(jQuery);
*/

function getIndicatorInfo() {
    if(indicator_info.length>0){
        indicator_info.splice(0,indicator_info.length);
    }

    $.getJSON(query_get_indicator_info_URL, function (data) {
        for(i=0; i < data.results.bindings.length; i++){
            indicator_info.push({
                'name':data.results.bindings[i].indicatorLabel.value,
                'desc':data.results.bindings[i].indicatorDescription.value,
                'unit':data.results.bindings[i].indicatorUnit.value,
                'datasetURL':data.results.bindings[i].datasetURL.value,
                'datasetLabel':data.results.bindings[i].datasetLabel.value,
                'sourceOrgURL':data.results.bindings[i].sourceOrgURL.value,
                'sourceOrgLabel':data.results.bindings[i].sourceOrgLabel.value,
            });
        }
    });
}

function loadCountriesIso3() {
    $.getJSON(query_countries_iso3_URL, function (data) {
        for(i=0; i < data.results.bindings.length; i++){
            countrieNameIso3.push({'name':data.results.bindings[i].countryLabel.value,'iso3':data.results.bindings[i].countryISO3.value,'url':data.results.bindings[i].countryURL.value});
        }
        //Nombre + bandera del pais
        //Cambiar la flag al pais
        $("#imgFlag").attr("src","img/flags/"+current_country_iso3.toLowerCase()+".svg");
        $(".tit-country").text(setNameCountry(current_country_iso3));
    });


}

function set_country_indicators() {

    
    $.getJSON(query_country_indicators_URL, function (data) {
        for(i=0; i < data.results.bindings.length; i++){
            var indicator = data.results.bindings[i].indicatorLabel.value;
            //var EndIndicator = indicator.split("-").pop();
            searchfor = 'wb-lgaf';
            if(indicator.toLowerCase().indexOf(searchfor) === -1){
                info_country_indicators.push({'name':data.results.bindings[i].indicatorLabel.value,'URL':data.results.bindings[i].indicatorURL.value});
                global_select_indicators += '<option value="'+data.results.bindings[i].indicatorURL.value+'">'+truncateString(data.results.bindings[i].indicatorLabel.value, 40, ' ', '...')+'</option>';
            }
            // if(!$.isNumeric(EndIndicator)) {
            //  info_country_indicators.push({'name':data.results.bindings[i].indicatorLabel.value,'URL':data.results.bindings[i].indicatorURL.value});
            //  global_select_indicators += '<option value="'+data.results.bindings[i].indicatorURL.value+'">'+data.results.bindings[i].indicatorLabel.value+'</option>';
            // }
            
        }

        //Cargamos los indicadores (TODOS CUIDADO)
        var $selIndicator = $(".sindicator, .msindicator");
        $selIndicator.html('');
        $selIndicator.append(global_select_indicators);

        //loadMapDefaults();
        //loadLineDefaults();

    });

    
}