(function($) {
    $(document).ready(function() {
        var LBT = new lbvisTable({
            iso3: Drupal.settings.landbook.countryCode,
            vis: LBV
        });
        LBV.ready().done(function () {
            LBT.init();
        });
    });
})(jQuery);
