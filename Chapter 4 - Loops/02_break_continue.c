#include <stdio.h>
#include <string.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 6)
            break; // stops the loop
        else
        {
            printf("%d\n", i);
        }
    }
    printf("********************************");
    for (int i = 0; i < 10; i++)
    {
        if (i == 6)
            continue; // ignores whatever down code and skips this iteration i.e 6-> goes to next one i.e 7
        else          // thats why i = 6 is not printed
            printf("%d\n", i);
    }
    return 0;
}