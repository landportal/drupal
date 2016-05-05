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
      }
    };
    function isVisibleNewsletterLanguage(){
      if($('#mailchimp-newsletter-land_portal_news_digest input').prop("checked")){
        $('#edit-mailchimp-lists-lang-wrap').show();
        checkDefaultValue();
      }
      else{
        $('#edit-mailchimp-lists-lang-wrap').hide();
        $('#edit-mailchimp-lists-lang-wrap .form-checkbox').prop("checked", false);
      }
      if($('#mailchimp-newsletter-legend_bulletin input').prop("checked")){
        $('#edit-mailchimp-lists-bull-lang-wrap').show();
        checkDefaultValue();
      }
      else{
        $('#edit-mailchimp-lists-bull-lang-wrap').hide();
        $('#edit-mailchimp-lists-bull-lang-wrap .form-checkbox').prop("checked", false);
      }
    };
    function checkDefaultValue(){
      var flag1=false;
      $('#edit-mailchimp-lists-lang-wrap .form-checkbox').each(function(){
        if($(this).prop("checked")){
          flag1=true;
        }
      });
      if(flag1==false){
        $('#edit-mailchimp-lists-bull-lang-wrap-bull-eng-lang').prop("checked", true);
      }

      var flag2=false;
      $('#edit-mailchimp-lists-lang-wrap .form-checkbox').each(function(){
        if($(this).prop("checked")){
          flag2=true;
        }
      });
      if(flag2==false){
        $('#edit-mailchimp-lists-lang-wrap-eng-lang').prop("checked", true);
      }
    };
  })(jQuery);
