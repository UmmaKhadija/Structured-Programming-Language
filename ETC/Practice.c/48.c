#include <stdio.h>
int main()
{
    int age = 18;
    int *ptr = &age;
    int newAge = *ptr;

    printf("HER AGE IS %d\n", newAge);

    return 0;
}