<?php

/**
* IdsApiCache Class.
* This class provides a simple file-based cache mechanism.
*
* The code is adapted from Pettakam, a simple cache library developed by Vimal Sudhan <me@vimalsudhan.com>
* The coding style is the original.
*
* @license Dual-licensed (Apache License 2.0 and GNU GPL 3.0)
* http://code.vimalsudhan.com/pettakam
*/

class IdsApiCache{
	
	private $repository = IDS_API_CACHE_DIR;
	private $file_extension = 'data';
	
	function __construct($config)	{
		if(isset($config['repository']))
			$repository = $config['repository'];
		if(isset($config['file_extension']))
			$this->file_extension = $config['file_extension'];
		$repository = str_replace("\\", "/", $repository); 
		$this->repository = $repository;
    $this->dir_writable();
	}

  function dir_writable() {
    if (file_exists($this->repository)) {
      if (is_writable($this->repository)) {
        return TRUE;
      }
      else {
        idsapi_register_error('idsapi', __('Cache directory is not writable: ') . $this->repository, 'IdsApiCache::dir_writable', 'warning');
        return FALSE;
      }
    }
    else {
      if (mkdir($this->repository)) {
        return TRUE;
      }
      else {
        idsapi_register_error('idsapi', __('Cache directory could not be created: ') . $this->repository, 'IdsApiCache::dir_writable', 'warning');
        return FALSE;
      }
    }
  }
	
	public function get($var)	{
    $file = $this->repository . '/' . $var . '.' . $this->file_extension;
    if (file_exists($file)) {
      $cache_str = @file_get_contents($file);
      if(empty($cache_str))
        return false;
      $cache = unserialize($cache_str);
      if(!isset($cache['expires']) || !isset($cache['data']))
        return false;
      if($cache['expires'] < time())
      {
        @file_put_contents($file, '');
        return false;
      }
      return $cache['data'];
    }
    else {
      return false;
    }
	}
	
	public function store($name, $val, $expires = 600, $group = '') {
		$cache = array('expires' => time() + $expires, 'data' => $val);
		if($group != '')
			$cache['group'] = $group;
		$cache_str = serialize($cache);
		@file_put_contents($this->repository .  '/'  . $name . '.' . $this->file_extension,$cache_str);
	}
	
	public function clear($var)	{
		if(!is_array($var))
			$var = array($var);
		foreach($var as $v)
			file_put_contents($this->repository .  '/'  . $v . '.' . $this->file_extension, '');
	}
	
	public function clear_all()	{
    if ($this->dir_writable()) {
      array_map('unlink', glob($this->repository . '/*'));
    }
	}
	
	public function clear_group($group)	{
		$file_extension = '.' . $this->file_extension;
		if ($handle = opendir($this->repository)) {
      while (false !== ($file = readdir($handle))) {
    		if (substr($file, strlen($file_extension)*-1) === $file_extension && $file != '.' && $file != '..') {
    			$cache_str = file_get_contents($this->repository .  '/'  . $file);
    			$cache = unserialize($cache_str);
    			if(!isset($cache['expires']) || !isset($cache['data']) || !isset($cache['group']) || $cache['group'] != $group)
    				continue;
		   		file_put_contents($this->repository .  '/'  . $file, '');
    		}
		  }
		  closedir($handle);
		}
	}
	
} // IdsApiCache Class.




