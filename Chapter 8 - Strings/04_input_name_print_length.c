#include <stdio.h>
#include <string.h>
int countLength(char arr[]);
int main()
{
    int count;
    char name[100];
    fgets(name, 100, stdin);
    char name2[] = "rimo";
    count = countLength(name);
    printf("Your Name Has %d letters\n", count - 1);
    printf("Your name Length is %d\n", strlen(name2));
    return 0;
}
int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
// same thing can be done with strlen(str) function