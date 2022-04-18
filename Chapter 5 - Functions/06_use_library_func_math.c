#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    float side_square;
    printf("Enter the side of square\n");
    scanf("%f", &side_square);
    printf("The Area of square is = %f ", pow(side_square, 2));
    return 0;
}