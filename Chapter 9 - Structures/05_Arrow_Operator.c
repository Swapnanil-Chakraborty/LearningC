#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int roll;
    float cgpa;
};
int main()
{
    struct student s1 = {"Rimo", 31, 8.7};
    printf("%d\n", s1.roll);
    struct student *ptr = &s1;   // create a structure pointer that points to address of s1;
    printf("%d\n", (*ptr).roll); // printing s1 roll by derefernceing s1.roll address.
    printf("%f\n", ptr->cgpa);
    return 0;
}