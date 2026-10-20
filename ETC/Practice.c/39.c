#include<stdio.h>
void printNumbers(int n)
{
    if(n == 0)
     return;

    printNumbers(n-1);  //calls the function with smaller number.
    printf("%d ", n); // runs after the recursive call, so the numbers print in ascending order.
     
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printNumbers(n);
    return 0;
}