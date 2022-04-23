// string are arrays and arrays are pointers so strings ar pointers.
#include <stdio.h>
#include <string.h>
int main()
{
    // char str[] = "Hello World";
    // str[] = "Hello"; reassign is not possible with str[] but is possible with pointers.
    // we can define a string with char name[5] = {'r', 'i', 'm', 'o', '\0'} or char name[5] = "rimo" but this value can't be reassigned
    char *str = "Hello World"; // an string created with pointers
    str = "Hello";             // this can be reassigned
    printf("%s", str);         //%s for string
    return 0;
}
// char *str