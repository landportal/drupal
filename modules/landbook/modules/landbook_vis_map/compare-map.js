(function($) {
    $(document).ready(function() {
        LBMG = new lbvisMap({
            target: '#map-global',
            map_data: map_data,
            iso3: Drupal.settings.landbook.countryCode,
            title: true,
            subtitle: true, // '{indicator.description}'
            legend: true,
            tooltip: true, // '{indicator.label}'
            indicators: true,
            indicator: 'WB-SL.AGR.EMPL.ZS',
            vis: LBV
        });
        LBV.ready().done(function () {
            LBMG.init();
        });
    });
})(jQuery);
