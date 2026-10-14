#include <stdio.h>
int checkEvenOdd(int n)
{
    if(n%2 == 0)
    { 
        printf("%d is Even\n", n);
    }
    else 
    {
        printf("%d is Odd\n", n);
    }
}

    int main()
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);

        checkEvenOdd(n);
        return 0;
    }
