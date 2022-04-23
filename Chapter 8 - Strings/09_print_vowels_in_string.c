#include <stdio.h>
#include <string.h>
int print_vowel(char str[]);
int main()
{
    char str[] = "Swapnanil Chakraborty";
    int vowelCount = print_vowel(str);
    printf("%d Vowels in %s", vowelCount, str);
    return 0;
}
int print_vowel(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    return count;
}