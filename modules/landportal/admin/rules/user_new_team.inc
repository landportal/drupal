<?php

$rule = '{ "user_new_team" : {
    "LABEL" : "New User - Landportal Team",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "TAGS" : [ "admin", "user", "landportal" ],
    "REQUIRES" : [ "rules", "hybridauth" ],
    "ON" : { "hybridauth_user_insert" : [] },
    "IF" : [
      { "text_matches" : {
          "text" : [ "hybridauth-user:mail" ],
          "match" : "@landportal.info",
          "operation" : "ends"
        }
      }
    ],
    "DO" : [
      { "user_add_role" : {
          "account" : [ "hybridauth-user" ],
          "roles" : { "value" : { "25521343" : "25521343" } }
        }
      },
      { "user_unblock" : { "account" : [ "hybridauth-user" ] } }
    ]
  }
}';

?>
