#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number>=0)
    {
        printf("%d is a positive number\n", number);
        if(number%2 == 0)
        {
            printf("%d is an even number\n", number);
        } else
        {
            printf("%d is an odd number\n", number);
        }
    }
    else
    {
        printf("%d is a negative number\n", number);
    }
}