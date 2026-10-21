#include <stdio.h>
int reverseNumbers(int n, int rev)
{
    if (n == 0)
        return rev;
    rev = rev * 10 + (n % 10);
    return reverseNumbers(n / 10, rev);
}

int main()
{
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    printf("REVERSE OF A NUMBER IS : %d\n", reverseNumbers(n,0));
    return 0;
}