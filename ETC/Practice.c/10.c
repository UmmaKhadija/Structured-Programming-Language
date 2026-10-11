#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 1;
    int fact = 1;
    while (i <= n)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d is: %d\n", n, fact);
    return 0;
}