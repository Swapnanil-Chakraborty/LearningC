// collection of different data types
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
    struct student s1;
    strcpy(s1.name, "Rimo");
    s1.cgpa = 9.1;
    s1.roll = 10;
    printf("Student Name is %s\n", s1.name);
    printf("Student Roll is %d\n", s1.roll);
    printf("Student CGPA is %.2f\n", s1.cgpa);
    struct student s2;
    strcpy(s2.name, "Titly");
    s2.roll = 11;
    s2.cgpa = 9.5;
    printf("Student Name is %s\n", s2.name);
    printf("Student Roll is %d\n", s2.roll);
    printf("Student CGPA is %.2f\n", s2.cgpa);
    struct student s3;
    strcpy(s3.name, "Avik");
    s3.roll = 12;
    s3.cgpa = 9.9;
    printf("Student Name is %s\n", s3.name);
    printf("Student Roll is %d\n", s3.roll);
    printf("Student CGPA is %.2f\n", s3.cgpa);
    return 0;
}