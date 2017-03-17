CKEDITOR.addTemplates("default", {
    imagesPath: Drupal.settings.basePath + Drupal.settings.landportal_partners.path + '/images/',
    templates: [
        { title:"2 Columns",
          image:"2c.gif",
          description:"2 columns side by side.",
          html:
          '<div class="row">'
          + '<div class="col-sm-6"><p>left</p></div>'
          + '<div class="col-sm-6"><p>right</p></div>'
          + '</div>'
        },
        { title:"3 Columns",
          image:"3c.gif",
          description:"3 columns side by side.",
          html:
          '<div class="row">'
          + '<div class="col-sm-4"><p>first</p></div>'
          + '<div class="col-sm-4"><p>second</p></div>'
          + '<div class="col-sm-4"><p>third</p></div>'
          + '</div>'
        },
        { title:"4 Columns",
          image:"4c.gif",
          description:"4 columns side by side. Breaks in 2 columns on small screens",
          html:
          '<div class="row">'
          + '<div class="col-sm-6 col-md-3"><p>first</p></div>'
          + '<div class="col-sm-6 col-md-3"><p>second</p></div>'
          + '<div class="col-sm-6 col-md-3"><p>third</p></div>'
          + '<div class="col-sm-6 col-md-3"><p>fourth</p></div>'
          + '</div>'
        },

        // // should be set another way
        // { title:"2 Columns with background 1",
        //   image:"2c.gif",
        //   description:"2 columns side by side with a colored background.",
        //   html:
        //   '<div class="partners-colored-background clearfix">'
        //   + '<div class="col-sm-offset-1 col-sm-10">'
        //   + '<h2>title</h2>'
        //   + '<div class="row clearfix">'
        //   + '<div class="col-sm-6"><p>left</p></div>'
        //   + '<div class="col-sm-6"><p>right</p></div>'
        //   + '</div>'
        //   + '</div>'
        //   + '</div>'
        // },
        // { title:"2 Columns with background 2",
        //   image:"2c.gif",
        //   description:"2 columns side by side with a colored background.",
        //   html:
        //   '<div class="partners-colored-background-1 clearfix">'
        //   + '<div class="col-sm-offset-1 col-sm-10">'
        //   + '<h2>title</h2>'
        //   + '<div class="row clearfix">'
        //   + '<div class="col-sm-6"><p>left</p></div>'
        //   + '<div class="col-sm-6"><p>right</p></div>'
        //   + '</div>'
        //   + '</div>'
        //   + '</div>'
        // },
        // { title:"2 Columns with background 3",
        //   image:"template2.gif",
        //   description:"2 columns side by side with a colored background.",
        //   html:
        //   '<div class="partners-colored-background-2 clearfix">'
        //   + '<div class="col-sm-offset-1 col-sm-10">'
        //   + '<h2>title</h2>'
        //   + '<div class="row clearfix">'
        //   + '<div class="col-sm-6"><p>left</p></div>'
        //   + '<div class="col-sm-6"><p>right</p></div>'
        //   + '</div>'
        //   + '</div>'
        //   + '</div>'
        // },
        // repeat
    ]
});
