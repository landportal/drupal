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
        { title:"4 Columns",
          image:"template2.gif",
          description:"4 columns side by side.",
          html:
          '<div class="col-sm-8 col-sm-offset-2">'
          + '<div class="row clearfix">'
          + '<div class="col-sm-6 col-md-3"><p>first</p></div>'
          + '<div class="col-sm-6 col-md-3"><p>second</p></div>'
          + '<div class="col-sm-6 col-md-3"><p>third</p></div>'
          + '<div class="col-sm-6 col-md-3"><p>fourth</p></div>'
          + '</div>'
          + '</div>'
        },
        { title:"2 Columns with background 1",
          image:"template2.gif",
          description:"2 columns side by side with a colored background.",
          html:
          '<div class="partners-colored-background">'
          + '<div class="col-sm-offset-1 col-sm-10">'
          + '<h2>title</h2>'
          + '<div class="row clearfix">'
          + '<div class="col-sm-6"><p>left</p></div>'
          + '<div class="col-sm-6"><p>right</p></div>'
          + '</div>'
          + '</div>'
          + '</div>'
        },
        { title:"2 Columns with background 2",
          image:"template2.gif",
          description:"2 columns side by side with a colored background.",
          html:
          '<div class="partners-colored-background-1">'
          + '<div class="col-sm-offset-1 col-sm-10">'
          + '<h2>title</h2>'
          + '<div class="row clearfix">'
          + '<div class="col-sm-6"><p>left</p></div>'
          + '<div class="col-sm-6"><p>right</p></div>'
          + '</div>'
          + '</div>'
          + '</div>'
        },
        { title:"2 Columns with background 3",
          image:"template2.gif",
          description:"2 columns side by side with a colored background.",
          html:
          '<div class="partners-colored-background-2">'
          + '<div class="col-sm-offset-1 col-sm-10">'
          + '<h2>title</h2>'
          + '<div class="row clearfix">'
          + '<div class="col-sm-6"><p>left</p></div>'
          + '<div class="col-sm-6"><p>right</p></div>'
          + '</div>'
          + '</div>'
          + '</div>'
        },
        // repeat
    ]
});
