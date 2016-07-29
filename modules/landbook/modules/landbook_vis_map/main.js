$( window ).load(function() {
  if(typeof COUNTRY_ISO3 !== "undefined"){
    var LBML = new lbvisMap({
      type: 'local',
      map_data: map_data,
      vis: LBV
    });
    LBML.init();

    // Global heatmap
    var LBMG = new lbvisMap({
      type: 'global',
      map_data: map_data,
      vis: LBV
    });
    LBMG.init();
  }

});