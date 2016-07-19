var $ = jQuery.noConflict();
$(document).ready(function() {
	//Anclas
	$(".a-nic").on("click",function(e){
		e.preventDefault();
	})


	//Desplegables de mГЎs informaciГіn
	/*$('.more-info-country [data-accordion]').accordion({
		"transitionSpeed": 400
	});*/
	//Iniciamos el carousel de fotos de country
	/*$('.carousel-photo-gallery').owlCarousel({
		center: true,
		items:3,
		loop:false,
		margin:1,
		responsive:{
			320:{
				items:1
			},
			768:{
				items:2
			},
			1200:{
				items:3
			}
		}
	});*/
	//###EVENTOS####//
	//Borramos item de la tabla indicadores
	$(document).delegate(".del-row","click", function(e){
		e.preventDefault();
		$(this).parent().parent().remove().fadeOut("fast");
	})
	//Agregamos aГ±os
	$(document).delegate("#isindicators", "change", function(){

		if($(this).val()!=0){
			$("#isyear").html("");
			$("#isyear").removeClass("cinput-disabled");
			$("#isyear").prop( "disabled", false );

			current_indicator_name = $(this).find("option:selected").text();
			table_selected_indicator = $(this).val();

			setDataURLs();
			loadYearsIndicatorCountry();
		}else{
			$("#isyear").val(0);
			$("#isyear").addClass("cinput-disabled");
			$("#isyear").prop( "disabled", true );
		}

	});
	$(document).delegate("#isyear", "change", function(){
		table_selected_indicator = $("#isindicators").val();
	});
	//Agregamos indicador
	$(document).delegate(".cbtn-iadd-indicator", "click", function(e){
		
		e.preventDefault();

		if(!$("#isyear").is('.cinput-disabled') && $("#isyear").val()!=0){

			var exist = 0;
			var indicatorsel = $("#isindicators").find("option:selected").val();
			selected_indicator_id = $("#isindicators").find("option:selected").val();
			var yearsel = parseInt($("#isyear").find("option:selected").val());
			//console.log(indicatorsel+"-");
			$("#tindicators tbody tr").each(function(){
				var indicatorTable = $(this).find("td").attr("data-id");
				var yearTable = parseInt($(this).find("td.year").text());
				console.log(yearsel+':'+indicatorsel+" - "+yearTable+':'+indicatorTable);
				if (indicatorTable == indicatorsel && yearTable == yearsel){
					exist ++;
				}
			});

			if(exist >0){
				alert("This indicator and year was added");
				return false;
			}

			//Get data	
			table_selected_year = $("#isyear").val();
			//console.log(table_selected_year);
			//console.log($("#isyear").val());
			setDataURLs();
			loadCountryIndicatorInfo();
		}else{
			alert("Select indicator and year");
		}
	})
	//SecciГіn infographics
	$(document).delegate("#lsindicador", "change", function(){
		if($(this).val()!=0){
			$("#lscountry").html("");
			$("#lscountry").removeClass("cinput-disabled");
			$("#lscountry").prop( "disabled", false );

			$("#lscountry").val(0);
			
			$(".speriod").val(0);
			$(".speriod").addClass("cinput-disabled");
			$(".speriod").prop( "disabled", true );

			table_selected_indicator = $(this).val();
			line_selected_indicator_URL = $(this).val();
			setDataURLs();
			loadCountriesPerIndicators();
			loadYearsIndicatorCountryCompare();

		}else{
			$("#lscountry").val(0);
			$("#lscountry").addClass("cinput-disabled");
			$("#lscountry").prop( "disabled", true );

			$(".speriod").val(0);
			$(".speriod").addClass("cinput-disabled");
			$(".speriod").prop( "disabled", true );

		}
	});

	$(document).delegate("#lscountry", "change", function(){

		if($(this).val()!=0){
			$(".speriod").prop( "disabled", false );
			$(".speriod").removeClass("cinput-disabled");
		}else{
			$(".speriod").val(0);
			$(".speriod").prop( "disabled", true );
			$(".speriod").addClass("cinput-disabled");
		}
	});

	//Agregamos el comparador si todos los campos estГЎn correctamente rellenados.
	$(document).delegate(".cbtn-ladd-compare", "click", function(e){
		e.preventDefault();

		if($("#lsperiod_from").val()!=0 && $("#lsperiod_to").val()!=0) {
			//console.log("ok");
			var newCountry = $("#lscountry").val();
			var dateFrom = parseInt($("#lsperiod_from").val());
			var dateTo = parseInt($("#lsperiod_to").val());

			if(current_compared_countries_iso3.contains(newCountry)) {
				alert("This country is already selected!");
				return false;
			}

			current_range_years_selected.length = 0;
			current_indicator_name = $("#lsindicador").find("option:selected").text();
			current_compared_countries_iso3.push(newCountry);
			
			if(dateFrom > dateTo) {
				current_range_years_selected.push(dateTo);
				current_range_years_selected.push(dateFrom);
			}else{
				current_range_years_selected.push(dateFrom);
				current_range_years_selected.push(dateTo);
			}
			
			var label = '<span class="label-compare displayib fos txt-s">'+$("#lscountry option:selected").text()+' <a href="#" class="close-label" data-iso3="'+$("#lscountry option:selected").val()+'"><img src="img/close-label.svg"></a></span>';
			$("#labels-compare").append(label)

			if($("#labels-compare > span.label-compare").length > 0){
				$("span.remove-text").removeClass("hddn");
			}

			setDataURLs();
			loadLineChart();

		}else{
			alert("Complete all data to load results");
		}
	});

	$(document).delegate(".close-label", "click", function(e){
		e.preventDefault();
		var stringToArray = current_compared_countries_iso3;
		var removeItem = $(this).attr("data-iso3");
		stringToArray = jQuery.grep(stringToArray, function(value) {
			return value != removeItem;
		});
        //Refrescamos el array existente donde se aГ±aden
        $(this).parent().remove();

        if($("#labels-compare > span.label-compare").length == 0){
			$("span.remove-text").addClass("hddn");
		}

        current_compared_countries_iso3 = stringToArray;
        setDataURLs();
		loadLineChart();
	})

	//## MAPPING EVENTS
	$(document).delegate("#msindicator", "change", function(e){
		e.preventDefault();
		if($(this).val()!=0){
			$("#msyear").html("");
			$("#msyear").removeClass("cinput-disabled");
			$("#msyear").prop( "disabled", false );
			current_indicator_name = $(this).find("option:selected").text();
			table_selected_indicator = $(this).val();
			map_selected_indicator_URL = $(this).val();
			setDataURLs();
			loadYearsIndicatorMap();
		}else{
			$("#msyear").val(0);
			$("#msyear").addClass("cinput-disabled");
			$("#msyear").prop( "disabled", true );
		}

	});

	$(document).delegate("#msyear", "change", function(e){
		e.preventDefault();
		if($(this).val()!=0){
			map_current_year = $(this).val();
			setDataURLs();
			loadMapChart();
		}

	});
	//##LGAF EVENTS
	$(document).delegate(".egsyear", "change", function(e){
		e.preventDefault();
		if($(this).val()!=0) {
			selectSetPanels($(this).val());
			$(".egspanel").removeClass("cinput-disabled");
			$(".egspanel").prop( "disabled", false );
			$(".egspanel").eq(0).text("Loading ...");
		}else{
			$(".egspanel").val(0);
			$(".egspanel").addClass("cinput-disabled");
			$(".egspanel").prop( "disabled", true );

			$(".egsindicator").val(0);
			$(".egsindicator").addClass("cinput-disabled");
			$(".egsindicator").prop( "disabled", true );

			$(".quality-list").html("");
			$(".quality-list").append('<li class="item-q fos r-pos txt-c c-g40">Please, select year and panels to show the info.</li>');

		}
	});
	$(document).delegate(".egspanel", "change", function(e){
		e.preventDefault();
		if($(this).val()!=0) {
			selectSetIndicators($(this).val());
			$(".egsindicator").removeClass("cinput-disabled");
			$(".egsindicator").prop( "disabled", false );
		}else{
			$(".egsindicator").val(0);
			$(".egsindicator").addClass("cinput-disabled");
			$(".egsindicator").prop( "disabled", true );
		}
	});
	$(document).delegate(".egsindicator", "change", function(e){
		if($(this).val()!=0) {
			current_elgaf_subindicator = $(this).val();
			current_elgaf_year = $(".egsyear").val();
			$("#quality-info .pos_loader_data").removeClass("hddn");
			setDataURLs();
			loadELGAFvalues();
		}
	});


});//End document ready

