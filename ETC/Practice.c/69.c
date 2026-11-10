#include <stdio.h>
void reverseArr(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstValue = arr[i];
        int secondValue = arr[n - 1 - i];
        arr[i] = secondValue;
        arr[n - 1 - i] = firstValue;
    }

}
 void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    reverseArr(arr, 5);
    printArr(arr, 5);
    return 0;
}