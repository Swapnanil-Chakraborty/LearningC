#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char ch;
    int count = 0;
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str[count] = ch;
        count++;
    }
    str[count] = '\0';
    puts(str);
    return 0;
}