(function($) {
    $(document).ready(function() {
        LBMG = new lbvisMap({
            target: '#map-global',
            map_data: map_data,
            iso3: (Drupal.settings.landbook.type == 'country' ? Drupal.settings.landbook.countryCode : false),
            title: true,
            subtitle: true, // '{indicator.description}'
            legend: true,
            tooltip: true, // '{indicator.label}'
            years: true,
            indicators: (Drupal.settings.landbook.type == 'indicators' ? false : true),
            indicator: (Drupal.settings.landbook.type == 'indicators' && Drupal.settings.landbook.id
                        ? Drupal.settings.landbook.id
                        : 'WB-SP.RUR.TOTL.ZS'),
            vis: LBV
        });
        LBV.ready().done(function () {
            LBMG.init();
        });
    });
})(jQuery);
