$( window ).load(function() {
  if(typeof COUNTRY_ISO3 !== "undefined"){
    var LBE = new lbvisLGAF({
      vis: LBV,
      jsonPath: Drupal.settings.landbook.libraryPath + '/json'
    });
    LBE.init();

    var LBLC = new lbvisLC({
      vis: LBV,
      //indicator: 'WB-SP.POP.TOTL',
    });
    LBLC.init();
  }

});