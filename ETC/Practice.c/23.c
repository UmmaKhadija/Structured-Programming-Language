#include<stdio.h>
int main() 
{
    int n, i;
    long long sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        sum += ( long long ) i*i;

    }

    printf("The sum of squares from 0 to %d is: %lld\n", n, sum);

    return 0;
}