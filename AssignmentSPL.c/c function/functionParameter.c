#include <stdio.h>
void myFunction(char name[])
{
    printf("Hello %s\n", name);
}

int main()
{
    myFunction("Conrad");
    myFunction("Jeremiah");
    myFunction("Steven");
    return 0;
}