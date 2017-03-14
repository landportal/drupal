CKEDITOR.stylesSet.add('default', [
    { name : 'Paragraph', element : 'p' },
    { name : 'Block arrow', element : 'div', attributes : { 'class' : 'partners-arrow' } },
    { name : 'Button', element : 'div', attributes : { 'class' : 'partners-button' } },
    { name : 'Small', element : 'span', attributes : { 'class' : 'small' } },
    { name : 'Bg blue',         element : 'div', attributes : { 'class' : 'partners-background' } },
    { name : 'Bg green',        element : 'div', attributes : { 'class' : 'partners-background-1' } },
    { name : 'Bg red',          element : 'div', attributes : { 'class' : 'partners-background-2' } },
]);

CKEDITOR.config.templates_replaceContent = false;
CKEDITOR.config.templates_files = [ Drupal.settings.basePath + Drupal.settings.landportal_partners.path + '/ckeditor.templates.js'];
CKEDITOR.config.colorButton_colors = '0096d8,abc029,f9b122';
CKEDITOR.config.font_names = 'Merriweather ; Open Sans';
CKEDITOR.config.fontSize_sizes = 'medium/16px;large/20px;title/28px;';
//CKEDITOR.config
//console.log(Drupal.settings);
