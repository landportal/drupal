$( window ).load(function() {
  if(typeof COUNTRY_ISO3 !== "undefined"){
    var LBP = new lbvisPie({
      vis: LBV
    });
    LBP.init();
  }

});