var countryCode=Drupal.settings.landbook.countryCode;

var map = wesCountry.maps.createMap({
	container: '#mapDiv',
	"borderWidth": 1.5,
	download: true,
	"countries": [{'code':countryCode}],
	"zoomToCountryFactor": 0.5,

	"onCountryClick": function(info) {
      window.location.href = '/book/countries/' + info.iso3;
    },
    onCountryOver: function(info) {
		selectCountry(this, info);
	},
});
map.zoomToCountry(countryCode);


function selectCountry(){
	return '';
}