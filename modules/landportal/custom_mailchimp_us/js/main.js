(function ($) {
  Drupal.behaviors.custom_mailchimp_us = {
    attach: function(context) {
        $('.vbo-table-select-all,.vbo-select.form-checkbox').removeAttr("checked");
        $('.vbo-table-select-all').click(function() {
          $('.vbo-select.form-checkbox').attr('checked', this.checked);
        });
    }
  }

})(jQuery);
