CKEDITOR.stylesSet.add('default', [
    { name : 'Paragraph',       element : 'p' },
    { name : 'Arrow',           element : 'div', attributes : { 'class' : 'partners-arrow' } },
    { name : 'Corner',          element : 'div', attributes : { 'class' : 'partners-corner' } },
    { name : 'Wrapped (hover)', element : 'div', attributes : { 'class' : 'block-wrapped' } },
    // TODO : update btn to BS std buttons
    { name : 'Button',          element : 'span', attributes : { 'class' : 'lp-button' } },
    { name : 'Button 2',        element : 'span', attributes : { 'class' : 'lp-button-1' } },
    { name : 'Button 3',        element : 'span', attributes : { 'class' : 'lp-button-2' } },
    { name : 'Bg blue',         element : 'div', attributes : { 'class' : 'bg-blue' } },
    { name : 'Bg green',        element : 'div', attributes : { 'class' : 'bg-green' } },
    { name : 'Bg red',          element : 'div', attributes : { 'class' : 'bg-red' } },
    { name : 'Bg grey',         element : 'div', attributes : { 'class' : 'bg-grey' } },
    { name : 'Top blue',        element : 'div', attributes : { 'class' : 'top-blue' } },
    { name : 'Top green',       element : 'div', attributes : { 'class' : 'top-green' } },
    { name : 'Top red',         element : 'div', attributes : { 'class' : 'top-red' } },
]);

// This should happen in ckeditor.config.js
CKEDITOR.config.templates_replaceContent = false;
CKEDITOR.config.templates_files = [ Drupal.settings.basePath + Drupal.settings.landportal_cke.path + '/ckeditor.templates.js'];
// See LP colors
CKEDITOR.config.colorButton_colors = '333366,006633,7A1F1F,EBEBE5,666666,333333';
CKEDITOR.config.font_names = 'Merriweather Sans';
CKEDITOR.config.fontSize_sizes = 'small/13px;normal/16px;medium/18px;large/22px;title/32px;';
//CKEDITOR.config.bodyClass = '.4242body';
CKEDITOR.dtd.$removeEmpty.span = 0;
//CKEDITOR.config
