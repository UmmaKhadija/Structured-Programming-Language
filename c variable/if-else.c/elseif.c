#include<stdio.h>
int main()
{
    int time = 20;
    if(time<12)
    { 
        printf("Good Morning");
    }
    else if(time<18)
    {
        printf("Good day");
    }
    else
    {
        printf("Good evening");
    }
    return 0;
}