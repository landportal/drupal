/**
 * @file
 * lpbs.select.js
 *
 * Author: Jules <jules@ker.bz>
 *
 * Init select2 on specific select form elements:
 *  - Multiple select
 *  - Single select with at least 8 options
 *  - Specific select, by DOM id (see force_ids array below)
 *
 */

var Drupal = Drupal || {};

(function($, Drupal) {
    "use strict";

    // Force select elements matching those DOM ids
    var force_ids = [
        // '#edit-field-indicator-map-und',
        // '#edit-field-indicator-ranking-und',
        '#edit-field-landvoc-to-und',
        '#edit-field-doc-type-tid',
        '#edit-field-organization-type-tid',
        '#edit-fields-add-new-field-type',
        '#edit-fields-add-existing-field-field-name',
        '.view-coda-form select'
    ];

    var select2opts = function (item) {
        return {
            containerCssClass: 'form-control',
            dropdownParent: $(item).parent()
        };
    };

    var select2init = function (item) {
        // If multi-select, add 'tags' style option to select2
        //console.log('GAME ON B#$%', item);
        if (item.multiple == true) {
            $(item).select2($.extend(select2opts(item), {
                tags: true,
                createTag: function(params) {
                    return undefined;
                }
            }));
        } else {
            $(item).select2(select2opts(item));
        }
    };

    // Drupal action stuff
    Drupal.behaviors.landportal_display = {
        attach: function(context) {
            //console.log('yooo', context);
            // Loop through all form select elements
            $('form select').each(function(i, item) {
                // Activate select2 on all multiple select
                // or if we have at least 8 options
                //console.log('select ' + i, item.multiple, $(item).multiple, item);
                if (item.multiple == true || item.length >= 8) {
                    select2init(item);
                }
            });
            // Specific select elements based on DOM ids
            force_ids.forEach(function(id) {
                var items = $(id);
                if (items.length) {
                    items.each(function (i, item) {
                        select2init(item);
                    });
                }
            });
        }
    }
}) (jQuery, Drupal);
