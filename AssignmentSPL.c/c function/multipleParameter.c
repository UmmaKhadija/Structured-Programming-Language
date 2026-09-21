#include <stdio.h>
void myFunction(char name[], int age)
{
    printf("Hello %s. You are %d years old.\n", name, age);
}

int main()
{
    myFunction("Conrad", 3);
    myFunction("Jeremiah", 14);
    myFunction("Steven", 30);
    return 0;
}