#include <stdio.h>
int main()
{
    float price[3], gst, sum;
    printf("Enter three prices\n");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    sum = price[0] + price[1] + price[2];
    printf("Enter GST percentage");
    scanf("%f", &gst);
    printf("The Final Price With Gst is %f", sum + ((sum)*gst) / 100);
    return 0;
}
