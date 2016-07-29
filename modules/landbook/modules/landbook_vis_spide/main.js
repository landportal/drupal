$( window ).load(function() {
  if(typeof COUNTRY_ISO3 !== "undefined"){
    var LBS = new lbvisSpider({
      vis: LBV
    });
    LBS.init();
  }

});