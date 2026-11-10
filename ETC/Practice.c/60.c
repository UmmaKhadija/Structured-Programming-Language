#include<stdio.h>
int main()
{
    float price[3];

    printf("Enter the price of 1st item : ");
    scanf("%f", &price[0]);
    printf("Enter the price of 2nd item : ");
    scanf("%f", &price[1]);
    printf("Enter the price of 3rd item : ");
    scanf("%f", &price[2]);

    printf("price of 1st item with gst is : %.2f\n", price[0] + (price[0] * 0.10));
    printf("price of 2nd item with gst is : %.2f\n", price[1] + (price[1] * 0.10));
    printf("price of 3rd item with gst is : %.2f\n", price[2] + (price[2] * 0.10));
    return 0;
}