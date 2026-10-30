#include<stdio.h>
void _swap(int *a, int *b);

int main()
{
    int x = 5 , y = 3;
    _swap(&x, &y);
    printf("x = %d\n & y = %d\n", x, y);
    return 0;
}


void _swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
