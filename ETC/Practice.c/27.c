#include <stdio.h>
#include<math.h>
float square(float n)
{
    return pow(n,2);
}

    int main()
    {
        float n, result;
        printf("Enter a number: ");
        scanf("%f", &n);

        result = square(n);
        printf("Square: %.2f\n", result);
        return 0;
    }
