#include<stdio.h>
void printNumbers(int n)
{
    if(n == 0) // base case.
     return;


    printf("%d ", n); // executes before the recursive call.
    printNumbers(n-1); // the numbers prints in descending order.
     
     
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printNumbers(n);
    return 0;
}