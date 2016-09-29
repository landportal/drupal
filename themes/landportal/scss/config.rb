#
# Landportal SCSS compiler configuration
#
# Author: Jules <jules@ker.bz>
#

require 'compass/import-once/activate'
require 'bootstrap-sass'
require 'font-awesome-sass'

###########################################
#
#       Compiler configuration
#

# Path configuration
http_path = "/"
css_dir = "../css"
sass_dir = "./"
images_dir = "../images"
fonts_path = "../fonts"
#javascripts_dir = "../js"
#additional_import_paths = [ "../libs/compass" ]
relative_assets = true

# don't touch this
preferred_syntax = :scss

###########################################
#
#       Environments
#

# DEV
if (environment.nil?)
  environment = :production
end
sourcemap = (environment == :production) ? false : true
output_style = (environment == :production) ? :compact : :expanded
line_comments = (environment == :production) ? false : true
