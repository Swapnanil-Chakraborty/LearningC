#include <stdio.h>
#include <string.h>
void calculateGST(float x);
int main()
{
    float x = 100.0;
    calculateGST(x);
    printf("%f\n", x);
    return 0;
}
void calculateGST(float x)
{
    x = x + (0.18 * x);
    printf("%f\n", x);
}