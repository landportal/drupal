(function($) {
    $(document).ready(function() {
        LBMap = new lbvisMap({
            map_data: map_data,
            selectable: true,
            tooltip: function () { return 'Click to visit '+this.point.name; },
            events: { click: function () { window.location.href = '/book/countries/' + this.id; } }
        });
        LBMap.init();
    });
})(jQuery);
