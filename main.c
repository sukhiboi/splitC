#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "string.h"

int main(void)
{
    char string[] = "this.is";
    Array_Pointer Array_of_Strings = split(string, '.');
    print_splitted_string(Array_of_Strings);
    return 0;
}