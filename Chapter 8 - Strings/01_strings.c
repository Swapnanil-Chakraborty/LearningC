#include <stdio.h>
#include <string.h>
int main()
{
    char name[5] = {'r', 'i', 'm', 'o', '\0'}; // this is a string initialized old way
    char name2[5] = {'r', 'i', 'm', 'o'};
    char name3[] = "RIMO"; // same string but new way to initilize .
    printf("%s\n", name);
    printf("%s\n", name2);
    printf("%s", name3);
    return 0;
}
// strings are multiple characters joined and ending with a null character "\0"