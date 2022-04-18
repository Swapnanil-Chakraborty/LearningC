#include <stdio.h>
#include <string.h>
int main()
{
    int age;
    printf("Enter age ");
    scanf("%d", &age);
    age >= 18 ? printf("adult\n") : printf("Not Adult\n");
    //ternary operator -> condition?if true do this : else do this
    return 0;
}