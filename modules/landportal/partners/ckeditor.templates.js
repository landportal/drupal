CKEDITOR.addTemplates("default", {
    imagesPath: CKEDITOR.getUrl(CKEDITOR.plugins.getPath("templates")+"templates/images/"),
    templates: [
        { title:"2 Columns",
          image:"template2.gif",
          description:"2 columns side by side.",
          html:
          '<div>'
          + '<h2>title</h2>'
          + '<div class="row clearfix">'
          + '<div class="col-sm-6"><p>left</p></div>'
          + '<div class="col-sm-6"><p>right</p></div>'
          + '</div>'
          + '</div>'
        },
        { title:"2 Columns with background",
          image:"template2.gif",
          description:"2 columns side by side with a colored background.",
          html:
          '<div class="partners-colored-background">'
          + '<h2>title</h2>'
          + '<div class="row clearfix">'
          + '<div class="col-sm-6"><p>left</p></div>'
          + '<div class="col-sm-6"><p>right</p></div>'
          + '</div>'
          + '</div>'
        },
        { title:"2 Columns with background 2",
          image:"template2.gif",
          description:"2 columns side by side with a colored background.",
          html:
          '<p style="clear:both;">before</p>'
          + '<div class="partners-colored-background-2 clearfix">'
          + '  <div class="col-sm-6">left</div>'
          + '  <div class="col-sm-6">right</div>'
          + '</div>'
          + '<p style="clear:both;">after</p>'
        },
        // repeat
    ]
});
