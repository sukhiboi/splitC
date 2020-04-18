#ifndef __ARRAY_H_
#define __ARRAY_H_

typedef char *char_pointer;

typedef struct
{
    char_pointer elements;
    int length;
} String;

typedef String *String_Pointer;

typedef struct
{
    String_Pointer *elements;
    int length;
} Array;

typedef Array *Array_Pointer;

String_Pointer create_string(int length);
Array_Pointer create_array(int length);

#endif