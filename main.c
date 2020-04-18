#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "string.h"

int main(void)
{
    char string[] = "this .is .cool";
    Array_Pointer split_string;

    split_string = split(string, '\0');
    print_splitted_string(split_string);

    split_string = split(string, ' ');
    print_splitted_string(split_string);

    split_string = split(string, 'i');
    print_splitted_string(split_string);

    split_string = split(string, '.');
    print_splitted_string(split_string);
    return 0;
}