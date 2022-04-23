#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    fgets(name, 100, stdin);//takes string
    puts(name);//prints string
    return 0;
}