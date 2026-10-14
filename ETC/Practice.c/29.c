#include<stdio.h>
int largest(int a, int b)
{
    if (a>b)
    {
        printf("%d is the largest number\n", a);
    }
    else if (b>a)
    {
        printf("%d is the largest number\n", b);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}


    int main()
    {
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        largest(a, b);
        return 0;
    }