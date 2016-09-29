<?php
/**
 * @file 
 */

if (!empty($fields)):
?>
<div class="ids-document">
  <?php
  foreach ($fields as $field => $definition):
    if ($definition['show']):
  ?>
    <div class="field-<?php echo $field;?>">
  <?php
      if (isset($definition['label'])):
        echo $definition['label'];?>
  <?php
      endif; // close if (isset($defintion['label'])
      echo $definition['value'];?>
    </div>
  <?php
    endif; // Close if ($definition['show']
  endforeach; // close foreach $fields
  ?>
  </div>
<?php
endif; // close if (!empty($fields))
?>
<div class="panel-footer"></div>