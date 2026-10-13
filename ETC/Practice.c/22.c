#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d ", a);
    }
    return 0;
}