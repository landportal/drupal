(function($) {
    $(document).ready(function() {
        var LBT = new lbvisTable({
            iso3: (Drupal.settings.landbook.type == 'country' ? Drupal.settings.landbook.countryCode : null),
            indicators: ["WB-SP.POP.TOTL", "WB-SP.RUR.TOTL.ZS", "WB-NY.GDP.PCAP.PP.KD", "FAO-6601-5110", "FAO-23045-6083", "DP-MOD-O-F", "DP-MOD-O-N", "FAO-LG.1FB"],
            vis: LBV
        });
        LBV.ready().done(function () {
            LBT.init();
        });
    });
})(jQuery);
