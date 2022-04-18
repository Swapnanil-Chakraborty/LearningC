/*
switch case can be in any order
nested switch is allowed 
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Monday");

        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Enter Day 1 - 7");
        break;
    }
    return 0;
}