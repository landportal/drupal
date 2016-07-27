var $ = jQuery.noConflict();
$( window ).load(function() {
  if(typeof COUNTRY_ISO3 !== "undefined"){
    var LBT = new lbvisTable({
      vis: LBV,
      target: '#block-indicators-indicators-block'
    });
    LBT.init();
  }
});