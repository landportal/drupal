<?php

$rule = '{ "workflow_published_contrib" : {
    "LABEL" : "publish contrib",
    "PLUGIN" : "reaction rule",
    "WEIGHT" : "-1",
    "OWNER" : "rules",
    "TAGS" : [ "content", "contrib", "workflow" ],
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
          "message" : "Dear web manager,\r\n\r\n[node:author] has published:\r\n[node:title] \/ [node:url]",
          "language" : [ "" ]
        }
      }
    ]
  }
}';
