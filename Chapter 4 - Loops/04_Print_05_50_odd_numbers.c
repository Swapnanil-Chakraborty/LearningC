#include <stdio.h>
#include <string.h>
int main()
{
    for (int i = 5; i <= 50; i++)
    {
        if (i % 2 == 0)
            continue;
        else
            printf("%d\n", i);
    }
    return 0;
}