#include<stdio.h>
int main()
{
    int marks[3];

    printf("Enter the marks of ENGLISH : ");
    scanf("%d", &marks[0]);

    printf("Enter the marks of MATHS : ");
    scanf("%d", &marks[1]);

    printf("Enter the marks of SCIENCE : ");
    scanf("%d", &marks[2]);

    printf("english , maths and science marks are : %d, %d, %d\n", marks[0], marks[1], marks[2]);

    return 0;
}