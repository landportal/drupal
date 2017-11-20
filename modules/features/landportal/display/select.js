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
                    $('#'+item.id).select2({
                        tags: true,
                        createTag: function(params) {
                            return undefined;
                        }
                    });
                } else if (item.options.length >= 8) {
                    $('#'+item.id).select2({
                        containerCssClass: 'form-control',
                        dropdownParent: $('#'+item.id).parent()
                    });
                // } else {
                //     console.log('SNGLE', item, $(item));                    
                }
            });
            // Useful to make sure those fields uses select2
            var single_fields = [
                'edit-field-indicator-map-und',
                'edit-field-indicator-ranking-und',
                'edit-field-landvoc-to-und',
                'edit-field-doc-type-tid',
                'edit-field-organization-type-tid',
                'edit-fields-add-new-field-type',
                'edit-fields-add-existing-field-field-name',
            ];
            $(single_fields).each(function(i, item) {
                $('#'+item).select2({
                    containerCssClass: 'form-control',
                    dropdownParent: $('#'+item).parent()
                });
            });
        }
    }
})(jQuery, Drupal);
