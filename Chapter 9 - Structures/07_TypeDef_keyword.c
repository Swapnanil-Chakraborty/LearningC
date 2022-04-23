#include <stdio.h>
#include <string.h>
typedef struct ComputerOrganizationArchitecture
{
    int modules;
    float completion;
    char name[100];
} coa;
void printInfo(coa s1)
{
    printf("Student Info :\n");
    printf("COA.Modules = %d\n", s1.modules);
    printf("COA.name = %s\n", s1.name);
    printf("COA.Complete = %.3f\n", s1.completion);
}
int main()
{
    coa s1 = {7, 10.1, "Rimo"};
    printInfo(s1);
    return 0;
}