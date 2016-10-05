;(function ($) {
  Drupal.behaviors.landbook={
    attach : function(context, settings){

      initPromoted();
      $('.form-item-promoted-to-country-page input, .form-item-promoted-to-thematic-page input').click(function(){
        initPromoted();
      });

      function initPromoted(){
        if($('.form-item-promoted-to-country-page input').prop("checked")){
          $('.form-item-promoted-nodes').show();
        }
        else{
          $('.form-item-promoted-nodes').hide();
        }

        if($('.form-item-promoted-to-thematic-page input').prop("checked")){
          $('.form-item-promoted-thematic-nodes').show();
        }
        else{
          $('.form-item-promoted-thematic-nodes').hide();
        }
      }

    },
  }
})(jQuery);
