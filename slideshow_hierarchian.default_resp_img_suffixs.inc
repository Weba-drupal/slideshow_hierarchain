<?php
/**
 * @file
 * slideshow_hierarchian.default_resp_img_suffixs.inc
 */

/**
 * Implements hook_default_resp_img_suffixs().
 */
function slideshow_hierarchian_default_resp_img_suffixs() {
  $export = array();

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = '4k';
  $resp_img_suffix->label = '4K';
  $resp_img_suffix->suffix = '_4k';
  $resp_img_suffix->breakpoint = 2560;
  $export['4k'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'hd';
  $resp_img_suffix->label = 'HD';
  $resp_img_suffix->suffix = '_hd';
  $resp_img_suffix->breakpoint = 1900;
  $export['hd'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'laptop_l';
  $resp_img_suffix->label = 'Laptop L';
  $resp_img_suffix->suffix = '_laptop_l';
  $resp_img_suffix->breakpoint = 1440;
  $export['laptop_l'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'mobile_l';
  $resp_img_suffix->label = 'Mobile L';
  $resp_img_suffix->suffix = '_mobile_l';
  $resp_img_suffix->breakpoint = 425;
  $export['mobile_l'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'mobile_m';
  $resp_img_suffix->label = 'Mobile M';
  $resp_img_suffix->suffix = '_mobile_m';
  $resp_img_suffix->breakpoint = 375;
  $export['mobile_m'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'mobile_s';
  $resp_img_suffix->label = 'Mobile S';
  $resp_img_suffix->suffix = '_mobile_s';
  $resp_img_suffix->breakpoint = 320;
  $export['mobile_s'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'standard';
  $resp_img_suffix->label = 'Standard';
  $resp_img_suffix->suffix = '_standard';
  $resp_img_suffix->breakpoint = 1024;
  $export['standard'] = $resp_img_suffix;

  $resp_img_suffix = new stdClass();
  $resp_img_suffix->disabled = FALSE; /* Edit this to true to make a default resp_img_suffix disabled initially */
  $resp_img_suffix->api_version = 1;
  $resp_img_suffix->name = 'tablet';
  $resp_img_suffix->label = 'Tablet';
  $resp_img_suffix->suffix = '_tablet';
  $resp_img_suffix->breakpoint = 768;
  $export['tablet'] = $resp_img_suffix;

  return $export;
}
