#include<stdio.h>
int main()
{
    int n, digit, reverse =0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n !=0)
    {
        digit = n%10; // Extract the last digit
        reverse = reverse * 10 + digit;
        n = n/10; // Remove the last digit
    }
    printf("Reverse of the number is: %d", reverse);
    return 0;
}