;(function ($) {
    Drupal.behaviors.landportal = {
      attach : function(context, settings) {
        Drupal.behaviors.landportal.initRegistrationForm(context, settings);
        Drupal.behaviors.landportal.initSearchSuggestions(context, settings);
        Drupal.behaviors.landportal.initScrollTo(context, settings);
        Drupal.behaviors.landportal.initShowInfo(context, settings);
        //Drupal.behaviors.landportal.initSearchBlock(context, settings);
        Drupal.behaviors.landportal.showSpiderBlock(context, settings);
        Drupal.behaviors.landportal.initCarousel(context, settings);
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
            if($('body').hasClass('logged-in') && $(this).attr('href') == '#narrative'){
              $('html, body').animate({
                scrollTop: $(scrollTo).offset().top-20
              }, 1000);
            }
            else{
              $('html, body').animate({
                scrollTop: $(scrollTo).offset().top
              }, 1000);
            }
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
        var timerId = setInterval(function() {
          if($('#wrapper-spiderchart').html() == ''){
              $('.spider-note').hide();
            }
            else{
              $('.spider-note').show();
              setTimeout(function() {
                clearInterval(timerId);
              }, 100);
            }
        }, 500);
        $('#wrapper-piechart').hide();
        var timer_landId = setInterval(function() {
          if($('.highcharts-subtitle tspan').text() == 'Land Area: undefined (Hectares)'){
              $('#wrapper-piechart').hide();
              setTimeout(function() {
                clearInterval(timer_landId);
              }, 100);
          }
          else{
            $('#wrapper-piechart').show();
          }
        }, 100);
      },
      initCarousel: function(context, settings){
        if($('#reletad-content .view-display-id-block_6 .empty').is('#reletad-content .view-display-id-block_6 .empty')){
            $('#reletad-content').addClass('empty');
        }
        else{
          $('#country-navigation').addClass('no-reletad-content-empty');
        }


        $('.view-landbook-countries-related.view-display-id-block_6 .view-content').owlCarousel({
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
