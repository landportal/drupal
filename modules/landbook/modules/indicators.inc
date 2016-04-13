<?php
/**
 * @file
 * Provide data indicators display
 *
 * The Landportal landbook
 *
 * Original work by: WESO
 * Drupal refactoring: Jules <jules@ker.bz>
 */

/**
 * Passing arguments here is kinda useless for the landbook
 * side of things, all 'dynamic' data rendering being made
 * via jquery/ajax stuff on the frontend.
 */

function landbook_indicators($args=NULL) {
  global $language;
  if ($args) {
    $template = 'indicator';
    $d = new Indicator();
    $data = $d->get($language);
    foreach ($data['selectors']['indicators'] as $i) {
      if ($i['id'] == $_GET['indicator']) break;
    }
    drupal_set_title(t($i['name']));
    $translatables['book'][] = t($i['name']);
  } else {
    $template = 'indicators';
    $d = new Indicators();
    $data = $d->get($language);
  }
  landbook_add_js_vars($args);
  landbook_add_js_css();
  drupal_add_js(drupal_get_path('module', 'landbook').'/js/country_chart_options.js');
  drupal_add_js(drupal_get_path('module', 'landbook').'/js/controller/' . $template . '.js', array('scope'=>'footer'));

  return array('content' => array(
    '#theme'    => $template,
    '#data'     => $data,
    )
  );
}


class Indicator {
	public function get($options) {
		$indicators = new Indicators();
		$result = $indicators->get($options);
		return array(
			"selectors" => array(
				"topics" => $result["topics"],
				"indicators"=> $result["indicators"]
			)
		);
	}
}


class Indicators {
	public function get($options) {
		$lang = $options->language;
		$cache = new CacheHelper('indicators', array(
			$lang,
		));
		$cached = $cache->get();
		if ($cached !== null) {
			return $cached;
		} else {
			$database = new DataBaseHelper();
			$database->open();
			$topics = $database->query("topics", array($lang));
			$indicators = $database->query("indicators", array($lang));
			$database->close();
			$result = $this->compose_data($topics, $indicators);
			$cache->store($result);
			return $result;
		}
	}

	private function compose_data($data, $inds) {
		$topics = array();
		$indicators = array();

		for ($i = 0; $i < count($data); $i++) {
			$topic_id = $data[$i]["topic_id"];
			if (!array_key_exists($topic_id, $topics)) {
				$topics[$topic_id] = array(
					"id" => $data[$i]["topic_id"],
					"translation_name" => utf8_encode($data[$i]["topic_name"]),
					"indicators" => array()
				);
			}

			$indicator = array(
				"id" => $data[$i]["indicator_id"],
				"preferable_tendency" => $data[$i]["preferable_tendency"],
				"last_update" => $data[$i]["last_update"],
				"starred" => $data[$i]["starred"],
				"name" => utf8_encode($data[$i]["indicator_name"]),
				"description" => utf8_encode($data[$i]["indicator_description"])
			);
			array_push($topics[$topic_id]["indicators"], $indicator);
		}

		for ($i = 0; $i < count($inds); $i++) {
			array_push($indicators, array(
				"id" => $inds[$i]["indicator_id"],
				"preferable_tendency" => $inds[$i]["preferable_tendency"],
				"last_update" => $inds[$i]["last_update"],
				"starred" => $inds[$i]["starred"],
				"name" => utf8_encode($inds[$i]["indicator_name"]),
				"description" => utf8_encode($inds[$i]["indicator_description"])
			));
		}
		return array("topics" => array_values($topics), "indicators" => $indicators);
	}
}
