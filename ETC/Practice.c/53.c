#include<stdio.h>

struct student
{
    int id;
    float cgpa;
    char name[20];
};

int main()
{
    struct student s;
    printf("ENTER YOUR ID: \n");
    scanf("%d", &s.id);
    printf("ENTER YOUR CGPA: \n");
    scanf("%f", &s.cgpa);
    printf("ENTER YOUR NAME: \n");
    scanf("%s", s.name);

    printf("NAME:%s\n , CGPA: %f\n, ID: %d\n", s.name, s.cgpa, s.id);
    return 0;
}