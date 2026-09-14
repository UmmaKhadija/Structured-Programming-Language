#include<stdio.h>
int main()
{
    int isologgedin = 1;
    int isadmin = 0;
    printf("regular user :%d\n"isologgedin && !isadmin);
    printf("has access: %d\n",isologgedin || isadmin);
    printf("not logged in: %d\n", !isologgedin);
    return 0;
}