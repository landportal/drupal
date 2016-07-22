'use strict';

var lbvisT = (function (args = {}) {
    return {
        indicators: [],
        current_indicator: {},
        selected_indicator: args.indicator || null,
        selected_year: args.year || 2011
    };
});

// var info_indicator_country = [];
// var default_table_indicators = [];

// Load and display 'default' indicators...
function loadDefaultTableIndicators(){
	$.getJSON(query_default_table_indicators_URL, function (data) {
		var newIndicator = new Object();
		var item_type;
		var indicatorIndex;
		for(j=0;j<data.results.bindings.length;j++){
			for(i=0;i<data.head.vars.length;i++){
				//indicatorIndex = default_table_indicators.containsIndicator(data.results.bindings[j].indicatorURL.value);
				//console.log("Indicator-index:" + indicatorIndex);
				item_type = data.head.vars[i];
				switch(item_type){
					case "obs": 						break;
					case "indicatorURL": 				newIndicator.url = data.results.bindings[j][item_type].value;
														break;
					case "indicatorLabel": 				newIndicator.name = data.results.bindings[j][item_type].value;
														break;
					case "indicatorDescription": 		newIndicator.description = data.results.bindings[j][item_type].value;
														break;
					case "year": 						/*if(indicatorIndex!=-1){
															indicators[indicatorIndex].years.push(data.results.bindings[j][item_type].value);
														}
														else{
															newIndicator.years = new Array();*/
															newIndicator.year = data.results.bindings[j][item_type].value;
														//}
														break;
					case "value": 						/*if(indicatorIndex!=-1){
															indicators[indicatorIndex].values.push(data.results.bindings[j][item_type].value);
														}
														else{*/
															newIndicator.value = data.results.bindings[j][item_type].value;
														//}
														break;
					case "unitLabel": 					newIndicator.unit_label = data.results.bindings[j][item_type].value;
														break;
					case "datasetURL": 					newIndicator.dataset_URL = data.results.bindings[j][item_type].value;
														break;
					case "datasetLabel": 				newIndicator.dataset_label = data.results.bindings[j][item_type].value;
														break;
					case "sourceOrgURL": 				newIndicator.source_URL = data.results.bindings[j][item_type].value;
														break;
					case "sourceOrgLabel": 				newIndicator.source_label = data.results.bindings[j][item_type].value;
														break;
					default:							break;
				}
			}
			//if(indicatorIndex==-1){
				default_table_indicators.push(newIndicator);
			//	}
				newIndicator = {};
		}

		$("table#tindicators tbody").html("");
		$.each(default_table_indicators, function( i, val ) {
			var row = ' <tr>\
                    <td class="t-td" data-id="'+default_table_indicators[i].url+'"><a href="'+default_table_indicators[i].url+'" target="_blank">'+default_table_indicators[i].name+'</a> <span class="info-bubble txt-s fright" data-toggle="tooltip" data-placement="top" title="'+default_table_indicators[i].description+'">i</span></td>\
                    <td class="t-td txt-c year" data-year="'+default_table_indicators[i].year+'">'+default_table_indicators[i].year+'</td>\
                    <td class="t-td txt-ar">'+default_table_indicators[i].value.replace(/\B(?=(\d{3})+(?!\d))/g, ",")+'</td>\
                    <td class="t-td">'+default_table_indicators[i].unit_label+'</td>\
                    <td class="t-td"><a href="'+default_table_indicators[i].dataset_URL+'" target="_blank">'+default_table_indicators[i].dataset_label+'</a> (<a href="'+default_table_indicators[i].source_URL+'" target="_blank">'+default_table_indicators[i].source_label+'</a>)</td>\
                    <td class="t-td txt-c"><a href="#" class="r-row del-row" data-ord=""><img src="/'+theme_path+'/images/ico-trash.svg" class="c-obj"></a></td>\
                  </tr>';

            $("table#tindicators tbody").append(row);
		});

		$(function () {
		  $('[data-toggle="tooltip"]').tooltip()
		})
	});
}

function loadYearsIndicatorCountry(){
	
	while(years_indicator_country.length > 0) {
	    years_indicator_country.pop();
	}
	
	$.getJSON(query_years_indicator_country_URL, function (data) {
		for(i=0; i < data.results.bindings.length; i++){
			years_indicator_country.push(data.results.bindings[i].year.value);
		}

		var iop = '<option value="0" data-localize="inputs.syear">Select year ...</option>';
		$.each(years_indicator_country, function( i, val ) {
			iop += '<option value="'+val+'">'+val+'</option>';
			//console.log(iop);
		});
		$("#isyear").append(iop);
		if(iop!=""){
			$("#isyear").removeClass("cinput-disabled");
			$("#isyear").prop( "disabled", false );
		}
	});
}



function loadCountryIndicatorInfo(){

	//Vaciamos el array
	info_indicator_country.length = 0;

	$.getJSON(query_info_indicator_country_year_URL, function (data) {
		for(i=0; i < data.results.bindings.length; i++){
			info_indicator_country.push(data.results.bindings[i].datasetLabel.value);
			info_indicator_country.push(table_selected_year);
			info_indicator_country.push(data.results.bindings[i].value.value);
			info_indicator_country.push(data.results.bindings[i].unitLabel.value);
			info_indicator_country.push(data.results.bindings[i].sourceOrgLabel.value);
			info_indicator_country.push(data.results.bindings[i].datasetURL.value);
			info_indicator_country.push(data.results.bindings[i].sourceOrgURL.value);
			info_indicator_country.push(data.results.bindings[i].indicatorDescription.value);
				
		}

		var addrow = '<tr>\
			<td class="t-td" data-id="'+selected_indicator_id+'"><a href="'+selected_indicator_id+'" target="_blank">'+current_indicator_name+'</a> <span class="info-bubble txt-s fright" data-toggle="tooltip" data-placement="top" title="'+info_indicator_country["7"]+'">i</span></td>\
		    <td class="t-td txt-c year" data-year="'+info_indicator_country["1"]+'">'+info_indicator_country["1"]+'</td>\
		    <td class="t-td txt-ar">'+info_indicator_country["2"].replace(/\B(?=(\d{3})+(?!\d))/g, ",")+'</td>\
		    <td class="t-td">'+info_indicator_country["3"]+'</td>\
		    <td class="t-td"><a href="'+info_indicator_country["5"]+'" target="_blank">'+info_indicator_country["0"]+'</a> (<a href="'+info_indicator_country["6"]+'" target="_blank">'+info_indicator_country["4"]+'</a>)</td>\
		    <td class="t-td txt-c"><a href="#" class="r-row del-row" data-ord=""><img src="/'+theme_path+'/images/ico-trash.svg" class="c-obj"></a></td>\
		    </tr>';
		$("table#tindicators tbody").append(addrow);

		$(function () {
		  $('[data-toggle="tooltip"]').tooltip()
		})

	});

}



//###EVENTOS####//
//Borramos item de la tabla indicadores
$ = jQuery.noConflict();
$(document).ready(function() {

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
				//console.log(yearsel+':'+indicatorsel+" - "+yearTable+':'+indicatorTable);
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
	});
    
});
