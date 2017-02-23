CKEDITOR.stylesSet.add('default', [
    { name : 'Paragraph', element : 'p' },
    { name : 'Block arrow', element : 'div', attributes : { 'class' : 'partners-arrow' } },
    { name : 'Button', element : 'div', attributes : { 'class' : 'partners-button' } },
    { name : 'Small', element : 'span', attributes : { 'class' : 'small' } },
]);

CKEDITOR.config.templates_replaceContent = false;
CKEDITOR.config.templates_files = [ Drupal.settings.basePath + Drupal.settings.landportal_partners.path + '/ckeditor.templates.js'];
//CKEDITOR.config
console.log(Drupal.settings);
