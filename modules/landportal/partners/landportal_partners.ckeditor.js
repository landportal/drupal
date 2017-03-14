if (window.CKEDITOR) {
  CKEDITOR.on('instanceReady', function(e) {
    var instance = e.editor;
    var doc = instance.document.$;
    var bc = instance.element.$.getAttribute('data-ckeditor-body-classes')
    if (bc) {
      doc.body.className += ' ' + bc + ' ';
    }
  });
}
