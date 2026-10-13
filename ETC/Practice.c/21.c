#include <stdio.h>
int main()
{
    int n, temp, digit, reverse = 0;

    printf("Enter the value of n: ");
    scanf("%d\n", &n);

    temp = n;

    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (temp == reverse)
    {
        printf("The number is a palindrome");
    }
    else
    {
        printf("The number is not a palindrome");
    }

    return 0;
}