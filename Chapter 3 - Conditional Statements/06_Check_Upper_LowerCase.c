#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    printf("Enter A Character \n");
    scanf("%c", &ch);
    if ((ch > 'a') && (ch < 'z'))
        printf("Lowercase");
    else
        printf("Uppercase");
    return 0;
}