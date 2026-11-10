#include<stdio.h>
int main()
{
    int age = 18;
    int _age = 19;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("ptr, _ptr = %u\n %u\n", ptr, _ptr);
    
    printf("difference between ptr and _ptr is : %u\n", ptr - _ptr);
    ptr = _ptr;
    printf( "comparison between ptr and _ptr is : %d\n", ptr == _ptr);
    return 0;
}