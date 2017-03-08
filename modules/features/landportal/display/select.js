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
            // Activate on all multiple select
            $('form select').each(function(i, item) {
                if (item.multiple == true) {
                    //console.log(i, item);
                    $('#'+item.id).select2({
                        tags: true,
                        createTag: function(params) {
                            return undefined;
                        }
                    });
                } else if (item.options.length >= 8) {
                    // item.setAttribute('tabindex', 42);
                    // item.removeAttribute('tabindex');
                    $('#'+item.id).select2({
                        dropdownParent: $('#'+item.id).parent()
                    });
                    console.log('SNGLE', item, $('#'+item.id));                    
                // } else {
                //     console.log('SNGLE', item, $(item));                    
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
