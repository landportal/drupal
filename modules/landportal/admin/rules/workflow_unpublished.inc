<?php

$rule = '{ "workflow_unpublished" : {
    "LABEL" : "Unpublished new content",
    "PLUGIN" : "reaction rule",
    "WEIGHT" : "1",
    "OWNER" : "rules",
    "TAGS" : [ "content", "workflow" ],
    "REQUIRES" : [ "rules", "rules_i18n" ],
    "ON" : { "node_insert" : [] },
    "IF" : [
      { "NOT node_is_published" : { "node" : [ "node" ] } },
      { "NOT user_has_role" : {
          "account" : [ "node:author" ],
          "roles" : { "value" : { "111903910" : "111903910", "30037204" : "30037204" } }
        }
      },
      { "text_matches" : {
          "text" : [ "site:url" ],
          "match" : "https?:\/\/landportal.org\/",
          "operation" : "regex"
        }
      }
    ],
    "DO" : [
      { "mail" : {
          "to" : "admin@landportal.info, team-comm@landportal.info",
          "subject" : "New content on the Landportal",
          "message" : "Hi there!\r\n\r\nIt looks like [node:author] created:\r\n[node:title] \/ [node:url]\r\nTo publish it, go to\r\n[node:edit-url]\r\ncheck the text, tags, link etc... tick the \u0022published\u0022 option then save.\r\n\r\nThat\u0027s all for now...\r\n--\r\nYour beloved Land Portal site.",
          "language" : [ "" ]
        }
      },
      { "mail" : {
          "to" : [ "node:author:mail" ],
          "subject" : "Content pending for moderation",
          "message" : "Hi,\r\n\r\nYour new content:  [node:title], is pending moderation from the Land Portal team.\r\nYou can edit it at: [node:edit-url]\r\nOnce published, it will be made available at: [node:url]\r\n\r\nBest regards,\r\nThe Land Portal Team.\r\n",
          "language" : [ "" ]
        }
      },
      { "drupal_message" : { "message" : "This content have not been published yet, it is pending moderation form the Land Portal Team.\r\n" } }
    ]
  }
}';
