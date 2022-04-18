#include <stdio.h>
#include <string.h>
int main()
{
    // and -> &&     or -> ||    not -> !    || xor -> ^
    int isSunday = 1, isSnowing = 1;
    int isGreater = 9, isSmaller = 100, two_digit = 33;
    printf("%d\n", isSunday ^ isSnowing);
    printf("%d\n", isGreater < two_digit && isSmaller > two_digit); // two digit number check
    return 0;
}