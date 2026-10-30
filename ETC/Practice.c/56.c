#include<stdio.h>
void cube(int *n);

int main()
{
    int n =5;
    cube(&n);
    printf("The value of n:%d\n", n);
    return 0;
}

// call by reference
void cube(int *n)
{
    *n= (*n) * (*n) * (*n);
    printf("Cube of n: %d\n", *n);
}