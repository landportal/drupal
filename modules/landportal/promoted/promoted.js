//
// For specific Nodes form Publishing options / promoted to country / thematic pages
//
(function ($) {
    Drupal.behaviors.landportal_promoted = {
        attach : function(context, settings) {
            var promoted = ['thematic'];
            //console.log(context, settings);
            // Check if we have promoted to country or thematic fields
            $.each(promoted, function  (i, p) {
                var f = $('.node-form input[name="promoted_to_' + p + '_page"]');
                var s = $('.node-form .field-name-field-' + p + '-promoted');
                console.log(p, 'start');
                if (f[0]) {
                    s.toggle(f[0].checked);
                    console.log(p, f[0].checked);
                    $('.node-form input[name="promoted_to_' + p + '_page"]').on('click', function (event) {
                        //console.log(p + ' ' + event.target.checked);
                        // Show or hide promoted to XXX select if pub. option is checked
                        $('.node-form .field-name-field-' + p + '-promoted').toggle(200);//event.target.checked);
                    });
                }
            });
        }
    }
})(jQuery);
