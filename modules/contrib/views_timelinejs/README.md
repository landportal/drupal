Views TimelineJS
================
This module adds a new style plugin for Views which renders result rows as
TimelineJS slides and eras.  The 7.x-3.x branch was created to work with the
TimelineJS3 version of the library.  For more information about TimelineJS visit
https://timeline.knightlab.com/index.html or the GitHub repository
https://github.com/NUKnightLab/TimelineJS3.

Installation
------------
Download the module from http://drupal.org/project/views_timelinejs and enable
it.  By default, there are no library files to download because they are served
from the NU Knight Lab CDN.

Optional: If you want to serve the library files from your own site instead of
the CDN, then you need to download the library files.  You MUST put the
TimelineJS library in the sites/all/libraries directory inside your Drupal
installation.  Alternate library locations such as those checked by the
Libraries API module will not work.

You can download or clone the entire TimelineJS3 GitHub repository.
```
git clone --branch master https://github.com/NUKnightLab/TimelineJS3.git
```

If you don't want to download the entire repository, then you can download the
Javascript and CSS files selectively.  The timeline.js and timeline.css files
are required to use TimelineJS.  The library also includes several font
library CSS files that must be downloaded if you want to use them.  In the end,
you need to have the following files in these directories:

1. sites/all/libraries/TimelineJS3/compiled/js/timeline.js
2. sites/all/libraries/TimelineJS3/compiled/css/timeline.css
3. sites/all/libraries/TimelineJS3/compiled/css/fonts/font.FONT-NAME.css
   (optional)

Finally, visit the admin settings form admin/config/development/views_timelinejs
to change the library location setting to Local path.

Upgrading
---------
If you are upgrading this module from version 7.x-1.x then make sure you test
your view and reconfigure it before deploying to a production environment!  Much
of the plugin's functionality was changed in the upgrade to TimelineJS3.
Version 3 of the library offers several nice enhancements over version 2.  The
plugin has received a lot of updates in order to take full advantage of the new
library.  Some settings have been changed or removed.  New settings have been
added.  The fact that the Date field setting has been split into separate Start
date and End date field settings means that all existing views that were built
with version 7.x-1.x will need to be reconfigured for 7.x-3.x.

Using the Plugin
----------------
1. Create a new view and change the display format to "TimelineJS".
2. Click "Add" in the Fields section of the Views interface to add all the
   desired fields to the view. Once fields have been added, they will be
   available for field mappings.
3. Format the fields used for the timeline as desired. For example, if you want
   the headline to link to the entity it represents use the "Link this field to
   the original piece of content" option in the field's settings.  Likewise if
   you want to strip tags from the body text, use the "Rewrite results" ->
   "Strip HTML tags" option in that field's settings.
4. Click the Settings link in the Format section.  Edit the general
   configuration of the timeline display.  Then add field mappings.  Start dates
   are required by event slides and eras.  End dates are also required by eras.
   If these mappings are not configured or if the fields do not contain dates in
   a valid format, then the slides or eras will not be added to the timeline.
   See the section on "Configuring the Plugin" for more information.
5. Click "Save" in the view to complete the configuration. The preview display
   on the Views edit interface shows the data used by TimelineJS.  To see the
   TimelineJS display, access the view page that was just created.

Configuring the Plugin
----------------------
The settings form, accessed by clicking the Settings link in the Format section,
is divided into three sections.  The TimelineJS Options and Additional Options
sections contain settings for controlling the timeline presentation.  The third
section is where you add field mappings.

A field mapping tells Views to output one of the data fields to a specific
TimelineJS object property.  These mappings more or less conform to the fields
in the TimelineJS Google Spreadsheet Template.  Unlike in version 7.x-1.x of the
module, the new plugin does not restrict the types of Drupal data fields that
may be used for mappings.  You may use any type of field with any configuration
and rewriting for any property, provided that the field output matches the type
of data expected by TimelineJS, with a few exceptions.

Here is a list of the available mappings, with suggestions for the data fields
you could use.
* Headline - The selected field may contain any text, including HTML markup.

* Body text - The selected field may contain any text, including HTML markup.

* Start date - The selected field should contain a string representing a date
  conforming to a [PHP supported date and time format]
  (http://php.net/manual/en/datetime.formats.php).

  Start dates are required by event slides and eras.  If this mapping is not
  configured or if the field does not output dates in a valid format, then the
  slides or eras will not be added to the timeline.

  The field should contain a single date, which means if you use a Date field
  then you need to configure it to only output the Start date value.  If you
  want to display end dates, then you will have to add the field a second time.
  Obviously, that second field should be configured to only output the End date
  value.

* End date - See the Start date mapping above.

  End dates are required by eras.  If this mapping is not configured or if the
  field does not output dates in a valid format, then the eras will not be added
  to the timeline.

* Display date - The selected field should contain a string.  TimelineJS will
  display this value instead of the values of the start and end date fields.

  This is possibly most useful for overriding the display of a Date field when
  you want to display a partial date.  The Date module requires you to input a
  complete date with a year, month, and day value.  That is because the MySQL
  datetime data type has this same restriction.  If you want to display a
  partial date, e.g. "June 2016", then input 06/01/2016 into the date field,
  optionally giving it a range with an end date of 06/30/2016, then enter "June
  2016" in the Display date field to format it the way you want.

* Background image - The selected field should contain a raw URL to an image.
  Special handling is included for Image fields because they have no raw URL
  formatter.

  There is another contributed module, Image URL Formatter, that adds a field
  formatter for outputting a raw Image URL.  You may use it if you want, but it
  should not be necessary with the special handling.  Use the default Image
  field formatter and the plugin will extract the URL from the img tag's src
  attribute.

  Of course, Link fields or Text fields will work for this mapping, along with
  any other field that can output a string containing a raw URL to an image.

* Background color - The selected field should contain a string representing a
  CSS color, in hexadecimal (e.g. #0f9bd1) or a valid [CSS color keyword]
  (https://developer.mozilla.org/en-US/docs/Web/CSS/color_value#Color_keywords).

* Media - The selected field should contain a raw URL to a media resource, an
  HTML blockquote, or an HTML iframe.  See the [media types documentation]
  (https://timeline.knightlab.com/docs/media-types.html) for a list of supported
  types. Special handling is included for Image fields because they have no raw
  URL formatter.

  See the Media Field Configuration section of this documentation for more
  information about how to set up entity fields and Views to include all
  supported types of media.

* Media caption - The selected field may contain any text, including HTML
  markup.

* Media credit - The selected field may contain any text, including HTML markup.

* Media thumbnail - The selected field should contain a raw URL for an image to
  use in the timenav marker for this event. If omitted, Timeline will use an
  icon based on the type of media.  Special handling is included for Image
  fields because they have no raw URL formatter.

* Group - The selected field may contain any text.

  The TimelineJS documentation makes no mention of HTML being allowed in group
  text, but it will be added to the output.  This plugin does not strip tags
  from groups in order to allow you to format them if desired.

  If you use a Taxonomy reference field for this purpose, it is recommended that
  you format the field as Plain text, rather than as a Link.  The links will not
  work correctly and they may cause the group text to be styled strangely.

* Type - Determines the type of timeline entity that is rendered: event, title
  slide, or era. This plugin recognizes a limited set of string values to
  determine the type.

  1. "title" or "timeline_title_slide" will cause a views data row to be
     rendered as a TimelineJS title slide. Only one title slide can be created
     per timeline. Additional title slides will overwrite previous slides.
  2. "era" or "timeline_era" rows will be rendered as TimelineJS eras.
  3. By default, a row with an empty value or any other input will be rendered
     as a regular event slide.

  Again, where these strings come from doesn't matter.  You could create a
  content type with a List field configured with a radio button widget.
  Alternatively, you could create separate content types for events, title
  slides, and eras, making sure they have machine names that match the accepted
  values.  Then add the Content: Type as a view field and map it to the Type
  property.

* Unique ID - The selected field should contain a string value which is unique
  among all slides in your timeline, e.g. a node ID. If not specified,
  TimelineJS will construct an ID based on the headline, but if you later edit
  your headline, the ID will change. Unique IDs are used when the hash_bookmark
  option is used.

  If you don't need to make sure your slides have permanent links, you probably
  don't need to configure this mapping.

Media Field Configuration
-------------------------
This plugin is able to display any of the [media types that are supported by
TimelineJS](https://timeline.knightlab.com/docs/media-types.html).  That said,
configuring your entity fields so that all of these media types can be added
while simultaneously ensuring a good user experience for your content creators
can be a real challenge!  Listed below are some tips for setting up your
entities and view.  If you come up with a different combination of fields,
settings, or other contributed modules that works well for you, please share it
with the community by posting an issue in our queue!

For the purposes of thinking about how to implement media fields they can be
divided into at least four categories:
* Images - If you're planning on linking exclusively to external images, then
  you can simply treat the Image as you would any other Embeddable media (see
  below).  Otherwise, you will need some means to upload the images into your
  Drupal site.

* Embeddable media - Most of the media types supported by TimelineJS fall into
  this category.  Provide TimelineJS with a URL to a media resource that it
  recognizes and it will use that resource's API to embed it for you.

* Blockquote - TimelineJS can display text as media, provided that you wrap the
  text in HTML blockquote tags, ```<blockquote>...</blockquote>```.

* iframe - TimelineJS recommends using ```<iframe>``` elements to embed media
  for which it doesn't have native support.  You can use the same text field as
  you use for blockquotes, but it is listed here separately because there may be
  security issues associated with allowing content to be embedded from untrusted
  sources.  Consult web security experts for more information.  Limit the
  ability to add iframes by giving only trusted user roles permission to use
  text formats that allow iframes in HTML!

Here are some configuration recipes for implementing media.

### A text field using CKEditor
CKEditor is an all-in-one solution for implementing all possible types of media
with a single field.  You can paste URLs, enter HTML, and even upload images
directly into the field.  Unfortunately, there are drawbacks.

Pros:
* One field may be better UX for content creators than multiple specialized
  fields.

* Fewer fields to configure in Views.

Cons:
* CKEditor loves to do things like wrap nearly everything with HTML tags.  After
  all, it is a WYSIWYG editor.  This can lead to unexpected behavior when
  entering your data.  You can get around it by switching the editor into
  "Source" mode, but that isn't an ideal solution.  If the content is edited
  later, the field won't be in Source mode.  The editor will re-wrap text with
  HTML.  The media may be broken without anyone realizing it!

* URLs pasted directly into the editor may or may not work.  In testing, a URL
  to a Google map was successfully embedded, but a URL to a YouTube video was
  not.

* Image uploading via the editor requires additional configuration of the Drupal
  7 CKEditor module.

* You can't apply styles to images uploaded via the editor.

* URLs are not validated.

### Separate Link, Image, and Text fields
Using multiple fields is possible if you properly configure your view.  You have
to set up your fields so that if one field is empty, it will fall back to
the output of another field, in successive order.  You do this by editing the No
Results Behavior of a field in Views.

For example, if you know that you will only need to embed supported media and
images, follow these steps:

1. Add a Link field and Image field to your slide entity.
2. When you create your view, add those fields.  Place the Link field above the
   Image field in the field list.  The order is important!
3. Change the No Results Behavior of the image field, pasting the Replacement
   Pattern for the link field, e.g. ```[field_timeline_media_url]```, into the
   No Results Text.
4. In the Format settings, change the Media field mapping to map to your Image
   field.

With this configuration if the image field is empty, it will fall back to
outputting the URL that is given by the link field.

Why was the order of the fields important?  The reason is that Views will
escape HTML entities in fields that are used as replacement patterns.  If any
replacement field outputs HTML, then TimelineJS will not be able to render the
media.  Getting around this problem is the tricky part of setting up the view.
You can only have one media field that outputs HTML; other fields used as
replacement values must output a raw URL.  That one HTML field must be placed
below the other media fields in the list.  The last field is the one that gets
mapped in the Format settings.

Here is another example with a Link, Image, and Text field in order to support
all possible media, including ```<blockquote>```.  Because there are two fields
that will output HTML you will have to do some extra configuration.

1. Download an enable the [Image URL Formatter]
(https://www.drupal.org/project/image_url_formatter) module.  It will allow you
to output your Image field as a raw URL.
2. Add a Link field, an Image field, and a Text field to your slide entity.
3. Add your new fields to the view.  The Link and Image field can go in any
   order, but the Text field must be placed below them in the list because it is
   the one field that will output HTML.
4. Edit the Image field's settings.  Change the Formatter to Image URL.
5. Assuming the Link field is first in the field list, paste its replacement
   pattern, e.g. ```[field_timeline_media_url]```, into the Image field's No
   Results Text.
6. Paste the Image field's replacement pattern, e.g.
   ```[field_timeline_media_image]``` into the Text field's No Results Text.
7. In the Format settings, change the Media field mapping to map to your Text
   field.

Pros:
* Discrete data fields for images and links, including whatever benefits they
  may provide, such as image styles and URL validation.

* Little to no need for dealing with annoying text editor settings every time
  you enter or edit data.  The bulk of the work is done only once in the back
  end through Views configuration.

Cons:
* Multiple fields may be confusing for content creators, resulting in bad UX.
  Field Help Text should clearly indicate which fields override others.  In the
  first example, the Image field overrides the Link field.  If both fields have
  data then the image will be displayed and any URL in the Link field will be
  ignored.

* Getting the field configuration working in Views may be a challenge for some
  site builders.

Maintainers
-----------
* Juha Niemi (juhaniemi)
* Olli Erinko (operinko)
* Jon Peck (fluxsauce)
* WorldFallz
* David Cameron (dcam)
