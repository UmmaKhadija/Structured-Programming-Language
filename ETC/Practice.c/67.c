#include<stdio.h>
int countOdd(int arr[], int n)
{  
     int count = 0;
    for(int i =0; i< n; i++)
    {
        if( arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

    int main()
    {
        int arr[] = { 1, 3, 5 , 6  ,7 ,8,9 };
        printf("Number of odd elements: %d\n",  countOdd(arr, 7));
        return 0;
    }