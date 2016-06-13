;(function ($) {
    Drupal.behaviors.landportal_utility = {
      attach : function(context, settings) {
        Drupal.behaviors.landportal_utility.initNewsletterForm(context, settings);
      },
      initNewsletterForm: function(context, settings){
        isVisibleNewsletterLanguage();
        $('#mailchimp-newsletter-land_portal_news_digest input,#mailchimp-newsletter-legend_bulletin input').bind("change click",function(){
          isVisibleNewsletterLanguage();
        });
      },
    };
    function isVisibleNewsletterLanguage(){
      if($('#mailchimp-newsletter-land_portal_news_digest input').prop("checked")){
        $('#edit-mailchimp-lists-mailchimp-land-portal-news-digest-interest-groups').show();
        //checkDefaultValue();
      }
      else{
        $('#edit-mailchimp-lists-mailchimp-land-portal-news-digest-interest-groups').hide();
        $('#edit-mailchimp-lists-mailchimp-land-portal-news-digest-interest-groups .form-checkbox').prop("checked", false);
      }
    };
    function checkDefaultValue(){
      var flag1=false;
      $('.form-checkboxes mailchimp-newsletter-interests-4 input').each(function(){
        if($(this).prop("checked")){
          flag1=true;
        }
      });
      if(flag1==false){
        $('.form-item-mailchimp-lists-mailchimp-land-portal-news-digest-interest-groups-1-English input').prop("checked", true);
      }
    };
  })(jQuery);
