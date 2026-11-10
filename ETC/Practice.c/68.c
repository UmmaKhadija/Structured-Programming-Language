#include<stdio.h>
void printNumbers(int arr[], int n);
int main()
{ 
    int arr[] = { 10, 20, 30, 40, 50 };
    printf("%d\n ", *(arr+2));
    printf("%d\n ", *(arr+5));
    return 0;
}