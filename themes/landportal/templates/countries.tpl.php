<?php
/* Stuff */

?>

<div class="content main-content container">
	<div class="row countries-container">
		<div class="col-sm-12">
            <p>
                {{#labels}}{{{countries_description}}}{{/labels}}
            </p>
            <ul>
                <li>{{#labels}}{{no_data}}{{/labels}} <i class="fa fa-ban"></i></li>
                <li>{{#labels}}{{extended_data}}{{/labels}} <i class="fa fa-star"></i></li>
            </ul>
        </div>
    </div>
    <div class="row countries-container">
        <div class="col-sm-6 col-lg-4">
            <label for="select-country">{{#labels}}{{select_a_country}}{{/labels}}:</label>
            <select id="country-select" class="countries-country-select" name="select-country">
            	<option selected="true">{{#labels}}{{select_a_country}}{{/labels}}</option>
    			{{#countries}}
    				<option value="{{iso3}}" {{^data}}disabled="disabled"{{/data}}>{{name}}</option>
    			{{/countries}}
            </select>
        </div>
        <div class="col-sm-6 col-lg-4">
            <input id="expand" type="checkbox" name="expand-all" />
            <label for="expand-all">{{#labels}}{{expand_all}}{{/labels}}</label>
        </div>
        <div class="col-sm-6 col-lg-4">
            <input id="no-data-countries" type="checkbox" name="show-only" />
            <label for="show-only">{{#labels}}{{show_only_countries}}{{/labels}}</label>
        </div>
    </div>
    <div class="continents">
        {{#continents}}
        <div class="row continent">
            <div class="col-sm-12 countries">
                <h1 class="country-name"><span>{{name}}</span><span class="down"><i class="fa fa-angle-down"></i></span></h1>
                <div class="continent-countries">
	                {{#countries}}
	                <div class="col-sm-8 col-md-6 col-lg-4">
	                    {{#data}}
	                    <a href="countries/{{iso3}}">
	                        <img class="flag flag-{{iso3}}" alt="" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAB4AAAAeAQMAAAAB/jzhAAAAA1BMVEX///+nxBvIAAAAAXRSTlMAQObYZgAAAAxJREFUeNpjYBiMAAAAlgABjcjBIQAAAABJRU5ErkJggg==">
	                        <span class="name">{{name}}</span>
	                    </a>
	                    {{/data}}
	                    {{^data}}
	                    	<div class="no-data-country">
		                        <img class="flag flag-{{iso3}}" alt="" src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAB4AAAAeAQMAAAAB/jzhAAAAA1BMVEX///+nxBvIAAAAAXRSTlMAQObYZgAAAAxJREFUeNpjYBiMAAAAlgABjcjBIQAAAABJRU5ErkJggg==">
		                        <span class="name">{{name}}</span>
		                        <span class="no-data"><i class="fa fa-ban"></i></span>
	                    	</div>
	                    {{/data}}
	                    {{#extended}}
	                        <span class="no-data"><i class="fa fa-star"></i></span>
	                    {{/extended}}
	                </div>
	                {{/countries}}
                </div>
            </div>
        </div>
        {{/continents}}
    </div>
</div>
