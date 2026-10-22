#include <stdio.h>
int main()
{
    char ch = 'K';
    char *ptr;
    ptr = &ch;

    printf("THE ALPHABATE IS: %c\n", *ptr);
    return 0;
}