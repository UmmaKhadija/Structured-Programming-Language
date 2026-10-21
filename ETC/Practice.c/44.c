#include<stdio.h>
int sumDigits(int n)
{
    if(n == 0)
    return 0;

    int digit= n % 10;
    if(digit < 0)
    digit = -digit; 
    return digit + sumDigits(n /10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digit: %d\n", sumDigits(n));
    return 0;
}