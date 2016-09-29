<?php
/**
 * @file 
 */
$filetypes = array(
  "pdf" => t("Adobe Acrobat Document"),
  "doc" => t("Microsoft Word Document"),
  "docx" => t("Microsoft Word Document")
);
if (!empty($documents)){
  ?>
  <div class="docicons">
  <?php
  foreach ($documents as $url){
    $extension = pathinfo($url, PATHINFO_EXTENSION);
    $type = isset($filetypes[$extension]) ? $filetypes[$extension] : "Document"
    ?>
    <div class="docicon">
      <a href='<?php echo $url;?>'>
        <img src="http://mimeicon.herokuapp.com/application/<?php echo $extension;?>?size=32">
        <br>
        <?php echo $type;?>
      </a>
    </div>
  <?php
  }
?>
  </div>
<?php
}