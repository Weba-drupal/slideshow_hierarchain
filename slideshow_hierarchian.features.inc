<?php
/**
 * @file
 * slideshow_hierarchian.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slideshow_hierarchian_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "resp_img" && $api == "default_resp_img_suffixs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slideshow_hierarchian_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function slideshow_hierarchian_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow_slider_4k.
  $styles['slideshow_slider_4k'] = array(
    'label' => 'slideshow_slider_4k',
    'effects' => array(),
  );

  // Exported image style: slideshow_slider_hd.
  $styles['slideshow_slider_hd'] = array(
    'label' => 'slideshow_slider_hd',
    'effects' => array(),
  );

  // Exported image style: slideshow_slider_laptop_l.
  $styles['slideshow_slider_laptop_l'] = array(
    'label' => 'slideshow_slider_laptop_l',
    'effects' => array(),
  );

  // Exported image style: slideshow_slider_mobile_l.
  $styles['slideshow_slider_mobile_l'] = array(
    'label' => 'slideshow_slider_mobile_l',
    'effects' => array(),
  );

  // Exported image style: slideshow_slider_mobile_m.
  $styles['slideshow_slider_mobile_m'] = array(
    'label' => 'slideshow_slider_mobile_m',
    'effects' => array(),
  );

  // Exported image style: slideshow_slider_mobile_s.
  $styles['slideshow_slider_mobile_s'] = array(
    'label' => 'slideshow_slider_mobile_s',
    'effects' => array(),
  );

  // Exported image style: slideshow_slider_standard.
  $styles['slideshow_slider_standard'] = array(
    'label' => 'slideshow_slider_standard',
    'effects' => array(),
  );

  // Exported image style: slideshow_slider_tablet.
  $styles['slideshow_slider_tablet'] = array(
    'label' => 'slideshow_slider_tablet',
    'effects' => array(),
  );

  // Exported image style: slideshowhd.
  $styles['slideshowhd'] = array(
    'label' => 'SlideshowHD',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function slideshow_hierarchian_node_info() {
  $items = array(
    'slideshow' => array(
      'name' => t('Slideshow'),
      'base' => 'node_content',
      'description' => t('Add slideshow to the block'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
