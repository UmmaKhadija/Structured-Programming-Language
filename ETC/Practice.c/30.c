#include<stdio.h>
void largest(int a, int b, int c)
{
    if (a>=b && a>=c)
    {
        printf("%d is the largest number\n", a);
    }
    else if (b>=a && b>=c)
    {
        printf("%d is the largest number\n", b);
    }
    else if (c>=a && c>=b)
    {
        printf("%d is the largest number\n", c);
    }


    else
    {
        printf("all numbers are equal\n");
    }
}


    int main()
    {
        int a, b,c ;
        printf("Enter three numbers: ");
        scanf("%d %d %d", &a, &b, &c);

        largest(a, b, c);
        return 0;
    }





