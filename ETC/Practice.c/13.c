#include<stdio.h>
int main()
{
    int n=2, i;
    for(i=1; i<=10; i++)
    {
        printf("the table of 2 is: %d*%d = %d\n", n,i,n*i);
    }
    return 0;
}