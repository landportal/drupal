;(function ($) {
    Drupal.behaviors.landportal = {
      attach : function(context, settings) {
        Drupal.behaviors.landportal.initRegistrationForm(context, settings);
        Drupal.behaviors.landportal.initSearchSuggestions(context, settings);
        Drupal.behaviors.landportal.initScrollTo(context, settings);
      },
      initRegistrationForm: function(context, settings){
        isVisibleNewsletterLanguage();
        $('.form-item-mailchimp-lists-mailchimp-land-portal-news-digest-subscribe input').bind("change click",function(){
          isVisibleNewsletterLanguage();
        });
      },
      initSearchSuggestions: function(context, settings){
        $suggestions=$('.spelling-suggestions dd').html();
        if($suggestions != undefined){
          $('#search-form .spelling-suggestions dt').after($suggestions);
          $('#search-form .spelling-suggestions').addClass('show');
        }
      },
      initScrollTo: function(context, settings){
        $('.nic-item a').click(function(event){
          event.preventDefault();
          var scrollTo=$(this).attr('href');
          $('html, body').animate({
              scrollTop: $(scrollTo).offset().top
          }, 1000);
        });
      }
    };
    function isVisibleNewsletterLanguage(){
      if($('#edit-mailchimp-lists-mailchimp-land-portal-news-digest-subscribe').prop("checked")){
          $('.form-item-mailchimp-lists-mailchimp-land-portal-news-digest-interest-groups-1').show();
        }
        else{
          $('.form-item-mailchimp-lists-mailchimp-land-portal-news-digest-interest-groups-1').hide();
      }
    }
  })(jQuery);
