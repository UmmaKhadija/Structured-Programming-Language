#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks > 30)
    {
        printf("You have passed the exam\n");
    }
    else if(marks <= 30)
    {
        printf("You have failed the exam\n");
    }
    else
    {
        printf("Result not found \n");
    }
    return 0;
}