#include <stdio.h>
float convertCelsius(float n)
{
    return (n * 9.0 / 5.0) + 32;
}
int main()
{
    float n;
    printf("Enter the value of n: ");
    scanf("%f", &n);

    printf("Temperature in fahrenheit: %.2f\n", convertCelsius(n));
    return 0;
}