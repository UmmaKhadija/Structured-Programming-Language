#include<stdio.h>
int main()
{
    char day;
    printf("Enter the day letter: ");
    scanf("%s", &day);

    switch(day)
    {
        case 'm':
            printf("Monday\n");
            break;
        case 't':
            printf("Tuesday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'h':
            printf("Thursday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 's':
            printf("Saturday\n");
            break;
        case 'u':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day letter\n");
    }
    return 0;
}