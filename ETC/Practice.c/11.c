// increment and decrement operators

#include<stdio.h>
int main()
{
    int i=2;

    printf("%d\n", i++); // This will print 2 and then increment i to 3
    printf("%d\n", i);

    printf("%d\n", ++i); // This will increment i to 4 and then print 4
    printf("%d\n", i);


    printf("%d\n", i--); // This will print 4 and then decrement i to 3
    printf("%d\n", i);

    printf("%d\n", --i); // This will decrement i to 2 and then print 2
    printf("%d\n", i);

    return 0;
}