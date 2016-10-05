;(function ($) {
  Drupal.behaviors.promoted = {
    attach : function(context, settings){
      Drupal.behaviors.promoted.initCustomPublishingOptions(context, settings);
      Drupal.behaviors.promoted.initPromotedCarousel(context, settings);
    },

    initCustomPublishingOptions: function(context, settings){
      initPromoted();
      $('.node-form .form-item-promoted-to-country-page input, .node-form .form-item-promoted-to-thematic-page input').on('click', function(event) {
        initPromoted();
      });
    },
    initPromotedCarousel: function(context, settings){
      if ($('.view-promoted .empty').get(0)) {
        $('#reletad-content').addClass('empty');
      }
      else{
        $('#country-navigation').addClass('no-reletad-content-empty');
      }
      if ($('.view-promoted').get(0)) {
        if ($('.view-promoted').css('display') == 'block') {
          $('.view-promoted .view-content').owlCarousel({
            center: false,
            items:3,
            loop:false,
            margin:1,
            responsive:{
              320:{
                  items:1,
                  loop: false,
              },
              768:{
                  items:2
              },
              1200:{
                  items:3
              }
            }
          });
        }
      }
    }
  }

  function initPromoted(){
    if($('.node-form .form-item-promoted-to-country-page input').prop("checked")){
      $('.node-form .form-item-promoted-nodes').show();
    }
    else{
      $('.node-form .form-item-promoted-nodes').hide();
    }

    if($('.node-form .form-item-promoted-to-thematic-page input').prop("checked")){
      $('.node-form .form-item-promoted-thematic-nodes').show();
    }
    else{
      $('.node-form .form-item-promoted-thematic-nodes').hide();
    }
  }
})(jQuery);
