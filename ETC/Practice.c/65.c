#include<stdio.h>
int main()
{
    int id[5];
    int *ptr = &id[0];

    for(int i=0; i<5 ; i++)
    {
        printf("%d index: ", i);
        scanf("%d", &id[i]);
    }
    for(int i = 0; i<5 ; i++)
    {
        printf("%d index: %d\n", i, id[i]);
    }

    return 0;
}