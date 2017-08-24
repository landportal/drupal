<?php

$rule = '{ "workflow_published_contrib" : {
    "LABEL" : "publish contrib",
    "PLUGIN" : "reaction rule",
    "WEIGHT" : "-1",
    "OWNER" : "rules",
    "TAGS" : [ "workflow", "content", "contrib" ],
    "REQUIRES" : [ "rules", "rules_i18n" ],
    "ON" : { "node_insert" : [] },
    "IF" : [
      { "user_has_role" : {
          "account" : [ "node:author" ],
          "roles" : { "value" : { "111903911" : "111903911" } }
        }
      },
      { "node_is_of_type" : {
          "node" : [ "node" ],
          "type" : { "value" : {
              "blog_post" : "blog_post",
              "event" : "event",
              "landlibrary_resource" : "landlibrary_resource",
              "news" : "news",
              "organization" : "organization",
              "project" : "project"
            }
          }
        }
      }
    ],
    "DO" : [
      { "node_publish" : { "node" : [ "node" ] } },
      { "mail" : {
          "to" : "admin@landportal.info, team-comm@landportal.info",
          "subject" : "[node:author] published: [node:title]",
          "message" : "Hi there!\r\n\r\n[node:author] have published:\r\n[node:title] \/ [node:url]\r\n\r\n--\r\nYour beloved Land Portal site.",
          "language" : [ "" ]
        }
      }
    ]
  }
}';

