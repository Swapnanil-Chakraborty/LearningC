#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    FILE *fptr;//created a file_pointer
    fptr = fopen("Rimo.txt", "r");
    fscanf(fptr,"%c",&ch);
    printf("%c",ch);
    fclose(fptr);
    return 0;
}