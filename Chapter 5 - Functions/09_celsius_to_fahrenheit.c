#include <stdio.h>
#include <string.h>
int cel_to_fahr(int celsius);
int main()
{
    printf("%d\n", cel_to_fahr(37));
    return 0;
}
int cel_to_fahr(int celsius)
{
    return (celsius * 9) / 5 + 32;
}