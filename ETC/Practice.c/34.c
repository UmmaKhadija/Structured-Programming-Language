#include<stdio.h>
void fibinocci(int n)
{
    int a=0, b=1, c, i;
    for(i=1; i<=n; i++)
    {
        printf("%d ", a);
        c= a+b;
        a=b;
        b=c;
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

     fibinocci(n);
    return 0;
}