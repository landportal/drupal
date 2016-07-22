function setDataURLs(){
    
    //SPARQL Querys
    var query_prefix = 'PREFIX cex: <http://purl.org/weso/ontology/computex#> ' +
    'PREFIX time: <http://www.w3.org/2006/time#> ' +
    'PREFIX ex: <http://www.example.org/rdf#> ';

    var query_prefix_elgaf = 'PREFIX cex: <http://purl.org/weso/ontology/computex#> '+
    'PREFIX qb: <http://purl.org/linked-data/cube#>';

    query_countries_iso3 = 'PREFIX ex: <http://www.example.org/rdf#> ' + 
    'SELECT ?countryURL ?countryISO3 ?countryLabel ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?countryURL a <http://purl.org/weso/landbook/ontology#Country> ; ' +
    'ex:label ?countryLabel . ' +
    'BIND (REPLACE(STR(?countryURL), "http://data.landportal.info/geo/","") AS ?countryISO3) ' +
    '} ORDER BY ?countryURL ';


    query_get_indicator_info = 'PREFIX ex: <http://www.example.org/rdf#> ' +
    'SELECT ?indicatorLabel ?indicatorDescription ?indicatorUnit ?datasetURL ?datasetLabel ?sourceOrgURL ?sourceOrgLabel '+
    'FROM <http://data.landportal.info> '+
    'WHERE { '+
    '<' + indicator_id_more_info + '> ex:label ?indicatorLabel ; '+
    'ex:description ?indicatorDescription ; '+
    'ex:unit ?indicatorUnit ; '+
    'ex:dataset ?datasetURL . '+
    '?datasetURL ex:label ?datasetLabel ; '+
    'ex:org ?sourceOrgURL . '+
    '?sourceOrgURL ex:label ?sourceOrgLabel. '+
    '} ';


    query_all_indicators = query_prefix + 
    'SELECT * '+
    'FROM <http://data.landportal.info> '+
    'WHERE { '+
        '?indicatorUrl a cex:Indicator ; '+
        'ex:label ?label ; '+
        'ex:description ?description . '+
    '}'+
    'ORDER BY ?label';


    query_country_indicators = query_prefix + 
    'SELECT DISTINCT ?indicatorURL ?indicatorLabel '+
    'FROM <http://data.landportal.info> '+
    'WHERE { '+
        '?obs cex:ref-indicator ?indicatorURL ; '+
        'cex:ref-area <http://data.landportal.info/geo/'+ current_country_iso3 +'> ; ' +
        'cex:value ?value. '+
        '?indicatorURL ex:label ?indicatorLabel . '+
    '} '+
    'ORDER BY ?indicatorURL';



    query_coutries_per_indicator = query_prefix + 
    'SELECT DISTINCT ?countryURL ?countryISO3 ?countryLabel ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
        '?obs cex:ref-indicator <' + table_selected_indicator + '> ; ' +
        'cex:ref-area ?countryURL .' +
        '?countryURL ex:label ?countryLabel. ' +
        ' BIND (REPLACE(STR(?countryURL), "http://data.landportal.info/geo/","") AS ?countryISO3) ' +
    '} ORDER BY ?countryLabel ';



    query_elgaf_country_years = query_prefix_elgaf + 
    'SELECT DISTINCT ?dataset ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
        '?obs cex:ref-area <http://data.landportal.info/geo/' + current_country_iso3 + '> ; ' +
        'qb:dataSet ?dataset. ' +
        'VALUES ?dataset {<http://data.landportal.info/dataset/WB-LGAF2013> <http://data.landportal.info/dataset/WB-LGAF2016>} ' +
    '} ';


    query_elgaf_values = query_prefix_elgaf + 
    'SELECT ?indicatorURL (STR(?value) AS ?value) ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
        '?obs cex:ref-area <http://data.landportal.info/geo/' + current_country_iso3 + '> ; ' +
        'qb:dataSet <http://data.landportal.info/dataset/WB-LGAF' + current_elgaf_year + '> ; ' +
        'cex:ref-indicator ?indicatorURL ; ' +
        'cex:value ?value. ' +
    '} ORDER BY ?indicatorURL ';

    


    var query_default_table_indicators = query_prefix +
    'SELECT ?obs ?indicatorURL ?indicatorLabel ?indicatorDescription (year(?dateTime) as ?year) ?value ?unitLabel ?datasetURL ?datasetLabel ?sourceOrgURL ?sourceOrgLabel ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-indicator ?indicatorURL ; ' +
    '    cex:ref-time ?time ; ' +
    '     cex:value ?value.           ' +
    '     ?indicatorURL ex:label ?indicatorLabel ; ' +
    '                   ex:description ?indicatorDescription ; ' +
    '                  ex:unit ?unitLabel ; ' +
    '                  ex:dataset ?datasetURL .  ' +               
    '    ?datasetURL ex:label ?datasetLabel ; ' +
    '                ex:org ?sourceOrgURL .  ' +
    '    ?sourceOrgURL ex:label ?sourceOrgLabel. ' +     
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?dateTime ' +
    '  ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/WB-SP.POP.TOTL> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '}  ' +
    'UNION ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/WB-SP.RUR.TOTL.ZS> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '} ' +
    'UNION ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/WB-NY.GDP.PCAP.PP.KD> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '} ' +
    'UNION ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/FAO-6601-5110> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '} ' +
    'UNION ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/FAO-23045-6083> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '} ' +
    'UNION ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/DP-MOD-O-F> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '} ' +
    'UNION ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/DP-MOD-O-N> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '} ' +
    'UNION ' +
    '{ ' +
    'SELECT ?obs  ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/FAO-LG.1FB> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime } ' +
    'ORDER BY DESC(?dateTime) ' +
    'LIMIT 1 ' +
    '} ' +
    '}';
    
    query_years_indicator_country = query_prefix +
    'SELECT (year(?dateTime) as ?year) ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <' + table_selected_indicator + '> ; ' +
    '     cex:ref-time ?time . ' +
    '?time time:hasBeginning ?timeValue . ' +
    '?timeValue time:inXSDDateTime ?dateTime ' +
    '} ' +
    'ORDER BY DESC(?dateTime)';

    // query_info_indicator_country_year = query_prefix +
    // 'SELECT ?value ?unitLabel ?datasetURL ?datasetLabel ?sourceOrgURL ?sourceOrgLabel ' +
    // 'FROM <http://data.landportal.info> ' +
    // 'WHERE { '+
    //  '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    //  'cex:ref-indicator <' + table_selected_indicator + '> ; ' +
    //  'cex:value ?value ; ' +
    //  'cex:ref-time ?time . '+
    //  '?time time:hasBeginning ?timeValue . ' +
    //  '?timeValue time:inXSDDateTime "' + table_selected_year + '-01-01T00:00:00Z"^^xsd:dateTime . ' +
    //  '<' + table_selected_indicator + '> ex:unit ?unitLabel ; ' +
    //  'ex:dataset ?datasetURL . ' +
    //  '?datasetURL ex:label ?datasetLabel ; ' +
    //  'ex:org ?sourceOrgURL . ' +
    //  '?sourceOrgURL ex:label ?sourceOrgLabel. ' +
    // '}';

    query_info_indicator_country_year = query_prefix +
    'SELECT ?indicatorLabel ?indicatorDescription ?value ?unitLabel ?datasetURL ?datasetLabel ?sourceOrgURL ?sourceOrgLabel ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { '+
        '?obs cex:ref-area <' + current_country_URL + '> ; ' +
        'cex:ref-indicator ?indicatorURL ; ' +
        'cex:value ?value ; ' +
        'cex:ref-time ?time . '+
        '?time time:hasBeginning ?timeValue . ' +
        '?timeValue time:inXSDDateTime "' + table_selected_year + '-01-01T00:00:00Z"^^xsd:dateTime . ' +
        '?indicatorURL ex:unit ?unitLabel ; ' +
        'ex:dataset ?datasetURL . ' +
        '?datasetURL ex:label ?datasetLabel ; ' +
        'ex:org ?sourceOrgURL . ' +
        '?sourceOrgURL ex:label ?sourceOrgLabel. ' +
        '?indicatorURL ex:label ?indicatorLabel ; ' +
        'ex:description ?indicatorDescription . ' +
        'VALUES ?indicatorURL {<' + table_selected_indicator + '>} '+
    '}';    


    
    var query_pie_chart = query_prefix +
    'SELECT ?ArableLandPer ?PermanentCropsPer ?PermanentPasturesAndMedowsPer ?ForestLandPer ?OtherPer ?TotalLandHa (year(?maxdateTime) as ?year) ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs1 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6621-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:value ?ArableLandHa ; ' +
    '     cex:ref-time ?time . ' +
    '?obs2 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6650-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:value ?PermanentCropsHa ; ' +
    '     cex:ref-time ?time . ' +
    '?obs3 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6655-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:value ?PermanentPasturesAndMedowsHa; ' +
    '     cex:ref-time ?time . ' +
    '?obs4 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6661-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:value ?ForestLandHa; ' +
    '     cex:ref-time ?time . ' +
    '?obs5 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6601-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:value ?TotalLandHa; ' +
    '     cex:ref-time ?time . ' +
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?maxdateTime . ' +
    'BIND ((xsd:double(xsd:float(?ArableLandHa)*100/xsd:float(?TotalLandHa))) AS ?ArableLandPer) ' +
    'BIND ((xsd:double(xsd:float(?PermanentCropsHa)*100/xsd:float(?TotalLandHa))) AS ?PermanentCropsPer) ' +
    'BIND ((xsd:double(xsd:float(?PermanentPasturesAndMedowsHa)*100/xsd:float(?TotalLandHa))) AS ?PermanentPasturesAndMedowsPer) ' +
    'BIND ((xsd:double(xsd:float(?ForestLandHa)*100/xsd:float(?TotalLandHa))) AS ?ForestLandPer) ' +
    'BIND ((100 - ?ArableLandPer  - ?PermanentCropsPer - ?PermanentPasturesAndMedowsPer - ?ForestLandPer) AS ?OtherPer) ' +
    '{' +
    'SELECT DISTINCT max(?dateTime) as ?maxdateTime ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE{' +
    '?obs1 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6621-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '>; ' +
    '     cex:ref-time ?time . ' +
    '?obs2 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6650-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-time ?time . ' +
    '?obs3 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6655-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-time ?time . ' +
    '?obs4 cex:ref-indicator <http://data.landportal.info/indicator/FAO-6661-5110> ; ' +
    '     cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-time ?time . ' +
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?dateTime .' +
    '}' +
    '}' +
    '}';

    query_map_chart =  query_prefix +
    'SELECT ?countryISO3 (year(?dateTime) as ?year) ?value ' + 
    'FROM <http://data.landportal.info>' +
    'WHERE {' +
    '?obs cex:ref-indicator ?indicatorURL ;' +
    '     cex:ref-area ?countryURL ;' +
    '     cex:ref-time ?time ;' +
    '     cex:value ?value.' +
    '?time time:hasBeginning ?timeValue .' +
    '?timeValue time:inXSDDateTime ?dateTime .' +
    'VALUES ?indicatorURL {<' + map_selected_indicator_URL + '>}' +
    'BIND (REPLACE(STR(?countryURL), "http://data.landportal.info/geo/","") AS ?countryISO3)' +  
    '}' +
    'ORDER BY ?dateTime ?countryURL';


    var query_spider_chart = query_prefix +
    'SELECT  ?sigi ?sigiTo100 ?sigiYear ?gini ?giniTo100 ?giniYear ?hdi ?hdiTo100 ?hdiYear ?ghi ?ghiTo100 ?ghiYear ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    'OPTIONAL{ ' +
    'SELECT ?sigi (year(?dateTime) as ?sigiYear) ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/OECD-SIGI-0> ; ' +
    '     cex:ref-time ?time ; ' +
    '     cex:value ?sigi . ' +
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?dateTime . ' +
    '} ORDER BY DESC(?dateTime) ' +
    '  LIMIT 1 ' +
    '} ' +
    'OPTIONAL{ ' +
    'SELECT ?hdi (year(?dateTime) as ?hdiYear) ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/UNDP-HDI-INDEX> ; ' +
    '     cex:ref-time ?time ; ' +
    '     cex:value ?hdi . ' +
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?dateTime . ' +
    '} ORDER BY DESC(?dateTime) ' +
    '  LIMIT 1 ' +
    '} ' +
    'OPTIONAL{ ' +
    'SELECT ?gini (year(?dateTime) as ?giniYear) ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/WB-SI.POV.GINI> ; ' +
    '     cex:ref-time ?time ; ' +
    '     cex:value ?gini . ' +
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?dateTime . ' +
    '} ORDER BY DESC(?dateTime) ' +
    '  LIMIT 1 ' +
    '} ' +
    'OPTIONAL{ ' +
    'SELECT ?ghi (year(?dateTime) as ?ghiYear) ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area <' + current_country_URL + '> ; ' +
    '     cex:ref-indicator <http://data.landportal.info/indicator/IFPRI-GHI> ; ' +
    '     cex:ref-time ?time ; ' +
    '     cex:value ?ghi . ' +
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?dateTime . ' +
    '} ORDER BY DESC(?dateTime) ' +
    '  LIMIT 1 ' +
    '} ' +
    'BIND ((xsd:float(100) - (?sigi)*100)  AS ?sigiTo100) . ' +
    'BIND ((xsd:float(100) - (?gini))  AS ?giniTo100) . ' +
    'BIND ((?hdi)*100 AS ?hdiTo100) . ' +
    'BIND ((xsd:float(100) - (?ghi))  AS ?ghiTo100) . ' +
    '}';


    query_line_chart = query_prefix +
    'SELECT ?countryISO3 (year(?dateTime) as ?year) ?value ' + 
    'FROM <http://data.landportal.info> ' +
    'WHERE { ' +
    '?obs cex:ref-area ?countryURL ; ' +
    '     cex:ref-time ?time ; ' +
    '     cex:value ?value. ' +          
    '     ?time time:hasBeginning ?timeValue . ' +
    '     ?timeValue time:inXSDDateTime ?dateTime . ' +
    '     BIND (REPLACE(STR(?countryURL), "http://data.landportal.info/geo/","") AS ?countryISO3) ' +
    '{ ' +
    'SELECT ?obs ' +
    'FROM <http://data.landportal.info> ' +
    'WHERE{ ' +
    '  ?obs cex:ref-indicator <' + line_selected_indicator_URL + '> . ' +
    '  ?obs cex:ref-area ?country . ' +
    '  VALUES ?country { ' +
    '   <' + current_country_URL + '> ';
    for(i=0; i<current_compared_countries_iso3.length; i++){
        query_line_chart = query_line_chart + "<" + country_URL_root + current_compared_countries_iso3[i] + ">";
    }
    query_line_chart = query_line_chart + '  } ' +
    '} ' +
    '} ' +
    '} ORDER BY ?dateTime ?countryURL';

    //GENERACIГ“N DE URLs
    URL_prefix = 'http://landportal.info/sparql?default-graph-uri=&query=';
    URL_suffix = '&should-sponge=&format=json&timeout=0&debug=on';
    

    //Consulta que devuelve nombre de paises y su iso3
    query_countries_iso3_URL = URL_prefix + encodeURIComponent(query_countries_iso3) + URL_suffix; 
    //Consulta de los indicadores del pais cargado
    query_country_indicators_URL = URL_prefix + encodeURIComponent(query_country_indicators) + URL_suffix; 
    //Nos trae todos los indicadores - deshabilitado
    query_all_indicators_URL = URL_prefix + encodeURIComponent(query_all_indicators) + URL_suffix;
    //Consulta de indicadores que se precargan por defecto en la tabla indicadores
    query_default_table_indicators_URL = URL_prefix + encodeURIComponent(query_default_table_indicators) + URL_suffix;
    //Consulta de aГ±os disponibles por indicador del pais
    query_years_indicator_country_URL = URL_prefix + encodeURIComponent(query_years_indicator_country) + URL_suffix;
    //InformaciГіn de la consulta dado un aГ±o y un indicador
    query_info_indicator_country_year_URL = URL_prefix + encodeURIComponent(query_info_indicator_country_year) + URL_suffix;
    //Consulta de indicadores por pais
    query_coutries_per_indicator_URL = URL_prefix + encodeURIComponent(query_coutries_per_indicator) + URL_suffix;
    //Consulta PIE chart
    query_pie_URL = URL_prefix + encodeURIComponent(query_pie_chart) + URL_suffix;
    //Consulta MAP chart
    query_map_URL = URL_prefix + encodeURIComponent(query_map_chart) + URL_suffix;
    //Consulta Spider chart
    query_spider_URL = URL_prefix + encodeURIComponent(query_spider_chart) + URL_suffix;
    //Consulta Line chart
    query_line_URL = URL_prefix + encodeURIComponent(query_line_chart) + URL_suffix;
    //Consulta ELGAF
    query_elgaf_country_years_URL = URL_prefix + encodeURIComponent(query_elgaf_country_years) + URL_suffix; 
    //Valores por aГ±o ELGAF
    query_elgaf_values_URL = URL_prefix + encodeURIComponent(query_elgaf_values) + URL_suffix; 
    //Obtenemos informaciГіn completa de un indicador
    query_get_indicator_info_URL = URL_prefix + encodeURIComponent(query_get_indicator_info) + URL_suffix; 

    //console.log(query_map_URL);


}