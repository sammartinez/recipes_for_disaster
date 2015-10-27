<?php
/**
 * @file
 * tips_and_tricks.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tips_and_tricks_taxonomy_default_vocabularies() {
  return array(
    'tips_and_tricks_tags' => array(
      'name' => 'Tips and Tricks Tags',
      'machine_name' => 'tips_and_tricks_tags',
      'description' => 'Tags for Tips and Tricks articles',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
