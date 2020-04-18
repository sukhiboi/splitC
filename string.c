#include <stdio.h>
#include "array.h"
#include "string.h"

int string_length(char_pointer string)
{
    int length = 0;
    while (string[length] != '\0')
        length++;
    return length;
}

int number_of_splits(char_pointer string, char separator)
{
    int number_of_parts = 1;
    LOOP(0, string_length(string))
    {
        if (string[i] == separator)
            number_of_parts += 1;
    }
    return number_of_parts;
}

String_Pointer create_sub_string(char_pointer string, int read_idx, int letter_count)
{
    String_Pointer str = create_string(letter_count + 1);
    int pos = 0;
    LOOP(read_idx, read_idx + letter_count)
    {
        str->elements[pos] = string[i];
        pos++;
    }
    str->elements[letter_count] = '\0';
    return str;
}

Array_Pointer split(char_pointer string, char separator)
{
    int length = string_length(string);
    int number_of_parts = number_of_splits(string, separator);
    Array_Pointer splitted = create_array(number_of_parts);
    int sub_string_idx = 0, read_idx = 0;
    LOOP(0, length)
    {
        if (string[i] == separator)
        {
            splitted->elements[sub_string_idx] = create_sub_string(string, read_idx, i - read_idx);
            read_idx = i + 1;
            sub_string_idx++;
        }
    }
    splitted->elements[sub_string_idx] = create_sub_string(string, read_idx, length - read_idx);
    return splitted;
}

void print_splitted_string(Array_Pointer split_string)
{
    printf("[ ");
    for (int i = 0; i < split_string->length; i++)
    {
        for (int j = 0; j < split_string->elements[i]->length; j++)
        {
            printf("%c", split_string->elements[i]->elements[j]);
        }
        printf(" ");
    }
    printf("]\n");
}