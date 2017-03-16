CKEDITOR.stylesSet.add('default', [
    { name : 'Paragraph',       element : 'p' },
    { name : 'Arrow',           element : 'div', attributes : { 'class' : 'partners-arrow' } },
    { name : 'Corner',          element : 'div', attributes : { 'class' : 'partners-corner' } },
    { name : 'Button',          element : 'div', attributes : { 'class' : 'partners-button' } },
    { name : 'Bg blue',         element : 'div', attributes : { 'class' : 'partners-colored-background' } },
    { name : 'Bg green',        element : 'div', attributes : { 'class' : 'partners-colored-background-1' } },
    { name : 'Bg red',          element : 'div', attributes : { 'class' : 'partners-colored-background-2' } },
    { name : 'Small',           element : 'span', attributes : { 'class' : 'small' } },
]);

// This should happen in ckeditor.config.js
CKEDITOR.config.templates_replaceContent = false;
CKEDITOR.config.templates_files = [ Drupal.settings.basePath + Drupal.settings.landportal_partners.path + '/ckeditor.templates.js'];
CKEDITOR.config.colorButton_colors = '0096d8,abc029,f9b122';
CKEDITOR.config.font_names = 'Merriweather ; Open Sans';
CKEDITOR.config.fontSize_sizes = 'medium/16px;large/20px;title/28px;';
CKEDITOR.dtd.$removeEmpty.span = 0;
//CKEDITOR.config
