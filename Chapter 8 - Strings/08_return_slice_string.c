// a program to make a function that will slice the string like str = dragon , slice_str = agon;
#include <stdio.h>
#include <string.h>
void slice(char str[], int start_slice, int end_slice);
int main()
{
    char str[100];
    int start, end;
    printf("Enter String\n");
    fgets(str, 100, stdin);
    // Swapnanil0
    // 0123456789
    printf("Enter Start And End Of Slice Func()\n");
    scanf("%d%d", &start, &end);
    slice(str, start, end);
    return 0;
}
void slice(char str[], int start_slice, int end_slice)
{
    char newString[100];
    int j = 0;
    for (int i = start_slice; i <= end_slice; i++)
    {
        newString[j] = str[i];
        j++;
    }
    newString[j] = '\0';
    puts(newString);
}