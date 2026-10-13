#include <stdio.h>

int main()
{
    int n, i = 2, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        while (i < n)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
            i++;
        }
    }

    if (prime == 1)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }

    return 0;
}