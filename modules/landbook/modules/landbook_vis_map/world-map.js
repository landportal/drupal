(function($) {
    $(document).ready(function() {
        if (LBV && map_data) {
            // Global heatmap
            var LBMG = new lbvisMap({
                type: 'global',
                map_data: map_data,
                vis: LBV
            });
            LBMG.init();
        }
    });
})(jQuery);
