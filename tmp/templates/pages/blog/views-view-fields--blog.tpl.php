<?php

/**
 * This view renders a blog entry including image, title, author and date,
 * related topics, content teaser and a button for read more.
 */
?>
<?php require_once(drupal_get_path("theme", "book") ."/template-loader.php"); ?>
<?php require_once(drupal_get_path("theme", "book") ."/utils/utils.php"); ?>
<?php $labels = get_labels($application_data['languages']); ?>

<div class="row blog-entry">
  <div class="col-sm-3">
    <!-- Image -->
    <?php print $fields["field_image"]->content; ?>
  </div>
  <div class="col-sm-9">
    <!-- Title -->
    <h3><?php print $fields["title"]->content; ?></h3>
    <!-- Author and date -->
    <div class="user date">
          <?php echo $labels["written_by"]; ?>
          <?php $content_creator = intval($fields['uid']->raw); ?>
          <a href="/user/<?php echo $content_creator; ?>" class="user">
              <?php $user_fields = user_load($content_creator); ?>
              <?php if (isset ($user_fields->field_firstname)): ?>
                  <?php echo $user_fields->field_firstname['und'][0]['safe_value']; ?>
                  <?php echo ' '; ?>
                  <?php echo $user_fields->field_lastname['und'][0]['safe_value']; ?>
              <?php else: ?>
                  <?php echo $user_fields->name; ?>
              <?php endif; ?>
          </a>
        <?php echo $labels["on"], " ", date($labels["date_format"], $created); ?>
      </div>
    <!-- Related topics -->
    <div class="topics">
      <?php print $fields["field_related_topics"]->content; ?>
    </div>
    <!-- Content teaser -->
    <div class="blog-post-description">
        <p><?php print closetags($fields["body"]->content); ?></p>
    </div>
    <!-- Read more -->
    <p class="read-more">
      <a href="/node/<?php print $row->nid; ?>"><?php print $labels["read_more"]; ?></a>
    </p>
  </div>
</div>
