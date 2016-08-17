;(function ($) {
    Drupal.behaviors.landportal = {
      attach : function(context, settings) {
        Drupal.behaviors.landportal.initRegistrationForm(context, settings);
        Drupal.behaviors.landportal.initSearchSuggestions(context, settings);
        Drupal.behaviors.landportal.initScrollTo(context, settings);
        Drupal.behaviors.landportal.initShowInfo(context, settings);
        //Drupal.behaviors.landportal.initSearchBlock(context, settings);
        Drupal.behaviors.landportal.showSpiderBlock(context, settings);
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
        $('#country-navigation .ul-wrap', context).once('nav-country', function(){
          var $navContainer = $(this);
          var $link = $navContainer.find('a');
          $link.each(function(index, el) {
            var idSection = $(el).attr('href');
            if (idSection != '#') {
              if ($(idSection).length == 0) {
                $(el).remove();
              }
            }
          });

          $link.on('click', function(event) {
            event.preventDefault();
            var scrollTo = $(this).attr('href');
            $('html, body').animate({
              scrollTop: $(scrollTo).offset().top
            }, 1000);
          });
        });
      },
      initShowInfo: function(context, settings){
        $('.mic-i-a,.mic-i-control').click(function(event){
          event.preventDefault();
          $(this).parent().toggleClass("show");
          $parent=$(this).parent();
          if($(this).parent().hasClass('show')){
           $('.show .mic-content').slideDown();
          }
          else{
            $($parent).find('.mic-content').slideUp();
          }
        });
      },
      initSearchBlock: function(context, settings){
        $('#header .search-form', context).once('search-form', function(){
          var $form = $(this);

          $form.hover(
            function() {
              $( this ).addClass( "active" );
            }, function() {
              if(!$form.find('.form-text').is( ":focus" )){
                $( this ).removeClass( "active" );
              }
            }
          );

          $form.find('.form-text').focusout(function(){
            $form.removeClass( "active" );
          });
        });
      },
      showSpiderBlock: function(context, settings){
        $.ajax({
        success: function(){
          if($('#wrapper-spiderchart').html() == ''){
            $('.spider-note').hide();
          }
          else{
            $('.spider-note').show();
          }
        }
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
