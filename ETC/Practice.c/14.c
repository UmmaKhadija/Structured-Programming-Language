#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(n %2 !=0 )
        {
            break;
        }
        printf("KHADIJA\n");
    }
    return 0;
}