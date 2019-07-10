#include "../libs/string_functs.h"

int count_characters( const char value[] ) {
  int index, count;
  for( index = 0, count = 0; value[index] != '\0'; index++, count++);
  return count;
}

void concat_string( char result[], const char string_1[], const char string_2[] ){  
  int index = 0, 
      string_1_count = count_characters(string_1), 
      string_2_count = count_characters(string_2);  

  for( index = 0; index < (string_1_count + string_2_count); index++){
    if( index < string_1_count) 
      result[index] = string_1[index];
    else
      result[index] = string_2[index - string_1_count ];
  };
  result[index] = '\0';
}

bool are_equal( const char string_1[], const char string_2[] ){
  int index = 0, 
      size_of_string_1 = count_characters(string_1),
      size_of_string_2 = count_characters(string_2);

  if( size_of_string_1 != size_of_string_2 )
    return false;

  for( index = 0; index < size_of_string_1; index++ ) 
    if( string_1[index] != string_2[index])
      return false;

  return true;
}