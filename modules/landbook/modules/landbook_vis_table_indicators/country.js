(function($) {
    $(document).ready(function() {
        if (LBV) {
            var LBT = new lbvisTable({
                vis: LBV
            });
            LBT.init();
        }
    });
})(jQuery);
