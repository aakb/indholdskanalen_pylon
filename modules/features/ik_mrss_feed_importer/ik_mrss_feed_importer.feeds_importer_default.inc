<?php
/**
 * @file
 * ik_mrss_feed_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ik_mrss_feed_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mrss_feed_importer';
  $feeds_importer->config = array(
    'name' => 'MRSS Feed Importer',
    'description' => 'Imports Yahoo Media RSS feeds',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'MediaRSS',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'SlideProcessor',
      'config' => array(
        'content_type' => 'slide',
        'expire' => '86400',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'field_ik_slide_text',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'media_image',
            'target' => 'field_ik_slide_media:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'parent:title',
            'target' => 'field_ik_slide_subheading',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'parent:taxonomy:tags',
            'target' => 'field_ik_slide_tags',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'parent:taxonomy:subject',
            'target' => 'field_ik_slide_category',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'parent:uid',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'parent:layout:exposure',
            'target' => 'field_ik_slide_exposure',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'parent:layout',
            'target' => 'field_layout',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'parent:design:logo',
            'target' => 'field_ik_slide_logo:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'parent:images:media',
            'target' => 'field_ik_slide_media:MediaFeedsLibraryProvider',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'parent:og:department',
            'target' => 'field_ik_og_department_ref',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'imported',
            'target' => 'field_ik_slide_imported',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'parent:nid',
            'target' => 'field_ik_slide_import_node',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'parent:design:color',
            'target' => 'field_ik_slide_color_theme',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'editor_html',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => 'media_rss_slide_import',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['mrss_feed_importer'] = $feeds_importer;

  return $export;
}
