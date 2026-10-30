#include<stdio.h>
void printfAddress(int n);

int main()
{
    int n = 4;
    printfAddress(n);
    printf("Address of n is : %u\n", &n);
    return 0;

}


void printfAddress(int n)
{
    printf("Address of n is : %u\n", &n);
}