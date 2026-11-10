#include<stdio.h>
void printNumbers(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={ 10, 20, 30,40,50};
    printNumbers(arr, 5);
    return 0;
}