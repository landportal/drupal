<?php





/******************************************
 * Everything below should disappear
 * once country pages have been refactorized
 */

/**
 * Dirty shit that should be converted to a rendered block
 * this would also mean tweaking the data structure and so on...
 */
function landbook_table_render($data) {//pa($data,1);
  //if ($data) dpm($data, 'table_render');
  $str = '
<div class="table-responsive">
  <table class="graphs table table-striped">
    <thead>
      <tr>';
  $str .= '        <th class="regionCode">' . t('Country code') . '</th>';
  $str .= '        <th class="regionName">' . t('Country name') . '</th>';
  $str .= '        <th class="indicatorCode">' . t('Indicator code') . '</th>';
  $str .= '        <th class="indicatorName">' . t('Indicator name') . '</th>';
  $str .= '        <th class="value">' . t('Value') . '</th>';
  $str .= '        <th class="time">' . t('Year') . '</th>';
  $str .= '                 </tr>
            </thead>
            <tbody>';
  if (isset($data['observations'])) {
    foreach ($data['observations'] as $o) {
      $str .= '    <tr>';
      $str .= '      <td class="regionCode">' . (isset($o['country']['code']) ? $o['country']['code'] : '') . '</td>';
      $str .= '      <td class="regionName">' . $o['country']['name'] . '</td>';
      $str .= '      <td class="indicatorCode">' . $o['indicator']['id'] . '</td>';
      $str .= '      <td class="indicatorName">' . $o['indicator']['name'] . '</td>';
      $str .= '      <td class="value">' . $o['value']['value'] . '</td>';
      $str .= '      <td class="time">' . $o['ref_time']['value'] . '</td>';
      $str .= '    <tr>';
    }
  }
  $str .= '  </tbody>
</table>
</div>';
      return $str;
}


?>