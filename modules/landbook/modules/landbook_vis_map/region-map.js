(function($) {
    $(document).ready(function() {
        if (LBV && map_data) {
            var LBML = new lbvisMap({
                type: 'local',
                map_data: map_data,
                vis: LBV
            });
            LBML.init();
        }
    });
})(jQuery);
