#include <stdio.h>
int main()
{
    float cgpa = 3.77;
    float *ptr;
    ptr = &cgpa;

    printf("THE CGPA IS : %f\n", *ptr);
    return 0;
}