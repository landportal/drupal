//
// For specific Nodes form Publishing options / promoted to country / thematic pages
//
(function ($) {
    Drupal.behaviors.landportal_promoted = {
        attach : function(context, settings) {
            var promoted = ['thematic'];
            // Check if we have promoted to country or thematic fields
            $.each(promoted, function  (i, p) {
                var f = $('.node-form input[name="promoted_to_' + p + '_page"]');
                var s = $('.node-form .field-name-field-' + p + '-promoted');
                if (f[0]) {
                    s.toggle(f[0].checked);
                    $('.node-form input[name="promoted_to_' + p + '_page"]').on('click', function (event) {
                        // Show or hide promoted to XXX select if pub. option is checked
                        $('.node-form .field-name-field-' + p + '-promoted').toggle(200);//event.target.checked);
                    });
                }
            });
        }
    }
})(jQuery);
