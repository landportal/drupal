;(function ($) {
    Drupal.behaviors.landportal = {
      attach : function(context, settings) {
        $('[data-toggle="tooltip"]').tooltip();
        Drupal.behaviors.landportal.initRegistrationForm(context, settings);
        Drupal.behaviors.landportal.initSearchSuggestions(context, settings);
        Drupal.behaviors.landportal.initScrollTo(context, settings);
        Drupal.behaviors.landportal.initShowInfo(context, settings);
        //Drupal.behaviors.landportal.initSearchBlock(context, settings);
        Drupal.behaviors.landportal.showSpiderBlock(context, settings);
        Drupal.behaviors.landportal.initReadMore(context, settings);
        Drupal.behaviors.landportal.nice_menu_direction(context);
        Drupal.behaviors.landportal.initPrintOrganization(context);
      },

        nice_menu_direction: function (context) {
  $("ul.nice-menu-down li li").mouseover(function(){ 
    if($(this).children('ul').length == 1) {
      var parent = $(this);
      var child_menu = $(this).children('ul');
      if( $(parent).offset().left + $(parent).width() + $(child_menu).width() > $(window).width() ){
        $(child_menu).css('left', '-' + $(parent).width() + 'px');
      } else {
        $(child_menu).css('left', $(parent).width() + 'px');
      }
    }
  });
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
            var height=$($parent).find('.mic-content .field-item').height();
           $($parent).find('.mic-content').animate({height:height});
          }
          else{
            $($parent).find('.mic-content').animate({height:0});
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
              if($(window).width()>=768){
                $('#wrapper-piechart').addClass('centered');
                $('.spiderchart').addClass('hide');
              }
            }
            else{
              $('.spider-note').show();
              if($(window).width()>=768){
                $('#wrapper-piechart').removeClass('centered');
                $('.spiderchart').removeClass('hide');
              }
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
      initReadMore: function(context, settings){
        $('.node-landlibrary-resource.node-teaser .field-name-field-doc-description').readmore({
          speed: 1000,
          lessLink: '<a href="#">(-) Less</a>',
          moreLink: '<a class="btn-more" href="#">(+) More</a>',
          collapsedHeight:110,
          heightMargin: 100
        });
      },
      initPrintOrganization: function(context, settings){
          $print=$('.print-organization').clone();
          $("#header .section").after($print);
          
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
