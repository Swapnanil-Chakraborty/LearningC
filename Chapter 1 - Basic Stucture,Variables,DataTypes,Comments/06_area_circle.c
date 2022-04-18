#include <stdio.h>
#include <string.h>
int main()
{
    float radius;
    printf("Enter Radius ");
    scanf("%f", &radius);
    printf("The Area Of Circle With Radius %f = %f", radius, 3.1428 * radius * radius);
    return 0;
}