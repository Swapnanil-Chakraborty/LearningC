// this program checks a used defined charater is present in a user defined string or not
// not working
#include <stdio.h>
#include <string.h>
void checkChar(char str[], char ch);
int main()
{
    int bool;
    char str[] = "Swapnanil Chakraborty";
    char ch = 'a';
    checkChar(str, ch);
    return 0;
}
void checkChar(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("%c is present in %s\n", ch, str);
            return;
        }
        printf("%c is present in %s\n", ch, str);
    }
}