<?php

$rule = '{ "workflow_unpublished" : {
    "LABEL" : "Unpublished new content",
    "PLUGIN" : "reaction rule",
    "WEIGHT" : "1",
    "OWNER" : "rules",
    "TAGS" : [ "workflow", "content" ],
    "REQUIRES" : [ "rules", "rules_i18n" ],
    "ON" : { "node_insert" : [] },
    "IF" : [
      { "NOT node_is_published" : { "node" : [ "node" ] } },
      { "NOT user_has_role" : {
          "account" : [ "node:author" ],
          "roles" : { "value" : { "111903910" : "111903910", "30037204" : "30037204" } }
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
      }
    ]
  }
}';

