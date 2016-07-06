<?php


class CacheHelper {

	private $hash_algorithm = 'md5';
	private $key;

        private $c;
        private $cached;

	/**
	 * @param $name Name of the service calling the cache.  Used to avoid collisions.
	 * @param $params Array with the parameters to compose the key.
	 */
	function __construct($name, $params) {
		$this->key = hash($this->hash_algorithm, $name . implode($params));

                $this->c = new Memcached();
                $this->c->addServer('localhost', '11211');
        }

	/**
	 * Gets the value stored in the cache
	 */
	public function get() {
          $c = $this->c->get($this->key);
          if (!$c) {
            return NULL;
          }
          $this->cached = $c;
          return $this->cached;
		/* if (function_exists('apc_exists') && apc_exists($this->key)) { */
		/* 	return apc_fetch($this->key); */
		/* } else { */
		/* 	return null; */
		/* } */
	}

	/**
	 * Store a value in the cache
	 */
	public function store($value) {
          $this->cached = $value;
          return $this->c->set($this->key, $this->cached);
		/* if (function_exists('apc_store')) { */
		/* 	apc_store($this->key, $value); */
		/* } */
	}
}