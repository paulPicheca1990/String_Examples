#include <stdio.h>
#include "./libs/string_functs.h"

int main( int argc, char **argv ) {  
  char first_name[] = "Bob Michael";
  char last_name[] = "Smiths";
  char full_name[count_characters(first_name) + count_characters(last_name)];

  printf( "String: %-18s | Count: %d\n", first_name, count_characters(first_name) );
  concat_string( full_name, first_name, last_name );
  printf( "String: %-18s | Count: %d\n\n", full_name, count_characters(full_name) );
  printf( "\"%s\" vs \"%s\" [ %s equal ]", first_name, last_name, are_equal(first_name, last_name) ? "are" : "are not" );
  
  return 0;
}