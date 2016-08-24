(function($) {
    $(document).ready(function() {
        LBV.ready().done(function () {
            // Global heatmap
            var LBMG = new lbvisMap({
                target: '#map-global',
                map_data: map_data,
                iso3: Drupal.settings.landbook.countryCode,
                title: true,
                subtitle: true,//function () { return this.indicator.label; },
                legend: true,
                indicators: true,
                indicator: 'WB-SL.AGR.EMPL.ZS',
                vis: LBV
            });
            LBMG.init();
        });
    });
})(jQuery);
