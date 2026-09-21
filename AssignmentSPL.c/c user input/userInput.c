#include<stdio.h>
int main()
{  
    int myNum;
    printf("Enter a number: ");
    sacnf("%d", &myNum);

    printf("Your number is: %d", myNum);
    return 0;
}