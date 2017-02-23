/**
 * @file
 * lpbs.select.js
 *
 * Should implemenet select-related options
 */

var Drupal = Drupal || {};

(function($, Drupal){
    "use strict";

    Drupal.behaviors.landportal_display = {
        attach: function(context) {
            var fields_select = [
                // LL specific
                'field-doc-type',
                'field-doc-publisher',
                'field-doc-provider',
                // LB specific
                'field_indicators',
                'field_indicator_ranking',
                'field_indicator_map',
                // Commons
                'form-item-type', // CT type?
                'field-featured',
                'field-orgref',
                'field-geographical-focus',
                'field-related-topics',
                'field-related-domains',
                'field-related-themes'
            ];
            // var forms = [
            //     '.node-form',
            //     '#taxonomy-form-term'
            // ];
            // $(forms).each(function(i, form) {
            //     //$(fields_select).each(function(i, field) {
            //     console.log(form);
            //     var select = $('form' + form + ' select');
            //     if (select.length > 0) {
            //         console.log(form, select);
            //     }
            // });
            $('form select').each(function(i, item) {
                if (item.multiple == true) {
                    //console.log(i, item);
                    $('#'+item.id).select2({
                        tags: true,
                        createTag: function(params) {
                            return undefined;
                        }
                    });
                // } else {
                //     console.log('Nothing for', item);
                }
            });
            var single_fields = [
                'edit-field-indicator-map-und',
                'edit-field-indicator-ranking-und',
                'edit-field-landvoc-to-und',
                'edit-field-doc-type-tid',
                'edit-field-organization-type-tid',
                'edit-fields-add-new-field-type',
                'edit-fields-add-existing-field-field-name',
            ];
            // Should be based on nb of items?
            $(single_fields).each(function(i, item) {
                $('#'+item).select2({
                    dropdownParent: $('#'+item).parent()
                });
                //console.log($('#'+item));
            });
            //console.log(select);
            //console.log('hello select', context, fields_select);
        }
    }
})(jQuery, Drupal);
