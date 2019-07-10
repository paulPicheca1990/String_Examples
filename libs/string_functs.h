#ifndef __STRING_FUNCTS_H__
#define __STRING_FUNCTS_H__

#include <stdbool.h>

int count_characters( const char value[] );

void concat_string( char result[], const char string_1[], const char string_2[] );

bool are_equal( const char string_1[], const char string_2[] );

#endif //__STRING_FUNCTS_H__
