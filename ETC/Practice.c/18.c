#include<stdio.h>
int main()
{
    int n, count=0, digit, sum=0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp =n;

    if(n == 0)
    {
        count = 1;
    }
    else{
        
        while(n != 0)
        {
            n = n / 10;
            count++;
        }
        printf("Number of digits: %d\n", count);

        n =temp;

        while(n != 0)
        {
            digit = n % 10;
            n = n / 10;
            sum = sum + digit;
        }
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}