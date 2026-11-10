#include<stdio.h>
int main()
{
    float number = 10.5;
    float *ptr = &number;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    return 0;
}