#include <stdio.h>
int countDigits(long long n)
{
    if (n < 0) {
        n = -n;
    }

    if (n < 10) {
        return 1;
    }
    return 1 + countDigits(n / 10);
}

int main() 
{
    long long n;
    
    printf("Enter an integer: ");
    if (scanf("%lld", &n) == 1) 
    {
        printf("The number has %d digits.\n", countDigits(n));
    } else 
    {
        printf("Invalid input.\n");
    }
    
    return 0;
}