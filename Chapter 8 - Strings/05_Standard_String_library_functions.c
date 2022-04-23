#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Rimo";
    char Name2[] = "Rimo2";
    char tempStr[] = " "; // empty
    char cat1[] = "Hello";
    char cat2[] = "World";
    char cat3[] = "";
    int length = strlen(name); // gets the length of the string
    int length2 = strlen(Name2);
    printf("%d\n%d\n", length, length2);
    strcpy(tempStr, name);
    puts(tempStr);
    strcat(cat1, cat2); // strcat concatinates two string together and stores the result in the cat1 ie the firstString;
    puts(cat1);
    int string_compare = strcmp(name, Name2); // strcmp compares two string accorrding to there ascii values
    printf("%d", string_compare);
    return 0;
}