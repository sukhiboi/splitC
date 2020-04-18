#ifndef __STRING_H_
#define __STRING_H_
#include "array.h"

#define LOOP(start, end) for (int i = start; i < end; i++)

int string_length(char_pointer string);
int number_of_splits(char_pointer string, char seperator);
String_Pointer create_sub_string(char_pointer string, int read_index, int letter_count);
Array_Pointer split(char_pointer string, char seperator);
void print_splitted_string(Array_Pointer Array_of_String);

#endif