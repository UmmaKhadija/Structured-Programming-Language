#include<stdio.h>
int squareArea(int side)
{
    return side*side;
}
int circleArea(int rad)
{
    return 3.14*rad*rad;
}
int rectangleArea(int a, int b)
{
    return a*b;
}

int main()
{
    int side;
    printf("Enter the value of side: ");
    scanf("%d", &side);

    printf("Area of rectangle: %d\n", squareArea(side));
    return 0;
}