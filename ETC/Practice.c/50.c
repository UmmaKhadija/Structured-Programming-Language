#include<stdio.h>
int main()
{
    int x = 10, y = 20;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;
    int sum1, sum2;

    sum1= x + y;
    printf("DIRECT SUM: %d\n", sum1);

    sum2= *ptr1 + *ptr2;
    printf("AJAIRAA SUM: %d\n", sum2);

    return 0;
}