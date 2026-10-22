#include <stdio.h>
int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
    int n, rev;
    printf("ENTER THE VALUE OF n: ");
    scanf("%d", &n);

    rev = reverse(n, 0);

    if (n == rev)
    {
        printf("%d IS A PALINDROME NUMBER.\n", n);
    }
    else
    {
        printf("%d IS NOT A PALINDROME NUMBER.\n", n);
    }

    return 0;
}