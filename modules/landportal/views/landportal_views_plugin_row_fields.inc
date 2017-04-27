<?php

/**
 * @file
 * Handler for landportal_views_plugin_row_fields.
 */
class landportal_views_plugin_row_fields extends entity_views_plugin_row_entity_view {

  function option_definition() {
    $options = parent::option_definition();

    $options['view_mode'] = array('default' => 'teaser');
    $options['links'] = array('default' => TRUE, 'bool' => TRUE);
    $options['comments'] = array('default' => FALSE, 'bool' => TRUE);
    $options['wrapped'] = array('default' => TRUE, 'bool' => TRUE);
    $options['wrap_path'] = array('default' => '');

    return $options;
  }

  /**
   * Provide a form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $entity_info = entity_get_info($this->entity_type);
    $options = array();
    if (!empty($entity_info['view modes'])) {
      foreach ($entity_info['view modes'] as $mode => $settings) {
        $options[$mode] = $settings['label'];
      }
    }
    //$options = $this->options_form_summary_options();
    $form['view_mode'] = array(
      '#type' => 'select',
      '#options' => $options,
      '#title' => t('View mode'),
      '#default_value' => $this->options['view_mode'],
     );
    $form['wrapped'] = array(
      '#type' => 'checkbox',
      '#title' => t('Wrap me'),
      '#default_value' => $this->options['wrapped'],
    );
    $form['wrap_path'] = array(
      '#type' => 'textfield',
      '#title' => t('Path'),
      '#default_value' => $this->options['wrap_path'],
    );
  }

  public function render($values) {
    if ($entity = $this->get_value($values)) {
      //dpm($this);
      // Add the view object as views_plugin_row_node_view::render() would.
      // Otherwise the views theme suggestions won't work properly.
      $entity->view = $this->view;
      $render = $this->rendered_content[entity_id($this->entity_type, $entity)];
      // Cleanup links to allow rendered element to be wrapped
      unset($render['links']);
      unset($render['#contextual_links']);
      $html = drupal_render($render);
      // Maybe even cleanup HTML from any remaining link...
      if ($this->options['wrapped']) {
        $url = '';
        if ($this->options['wrap_path']) {
          // A bit sketchy but it does the job...
          $tokens = token_scan($this->options['wrap_path']);
          foreach ($tokens as $t => $td) {
            $v = $values->{$t}[0]['raw']['value'];
            $url = str_replace($td[0], $v, $this->options['wrap_path']);
          }
          //dpm($values, $url);
        } else {
          if ($render['#entity_type'] == 'taxonomy_term') {
            $url = drupal_get_path_alias('taxonomy/term/' . $entity->tid);
          } else {
            $url = drupal_get_path_alias('node/' . $entity->nid);
          }
        }
        $html = '<a href="/' . $url . '">' . $html . '</a>';
      }
      return $html;
    }
  }
}
