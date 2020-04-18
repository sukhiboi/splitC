#include <stdlib.h>
#include "array.h"

String_Pointer create_string(int length)
{
    String_Pointer array = malloc(sizeof(String));
    array->length = length;
    array->elements = malloc(sizeof(char) * array->length);
    return array;
}

Array_Pointer create_array(int length)
{
    Array_Pointer array = malloc(sizeof(Array));
    array->length = length;
    array->elements = malloc(sizeof(String_Pointer) * array->length);
    return array;
}