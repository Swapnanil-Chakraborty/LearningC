#include <stdio.h>
#include <string.h>
void Greet_India();
void Greet_French();
int main()
{
    char ch;
    printf("Enter I for India\nEnter F for French\n");
    scanf("%c", &ch);
    if (ch == 'i')
        Greet_India();
    if (ch == 'f')
        Greet_French();
    return 0;
}
void Greet_French()
{
    printf("Bonjour ami");
}
void Greet_India()
{
    printf("Namaste dost");
}
