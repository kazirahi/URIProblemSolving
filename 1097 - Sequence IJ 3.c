#include<stdio.h>
int main()
{
    int i,l,I, j, k;

    for (i = 1,j =7; i <= 9; i += 2,j += 2)
    {
        for (l = i, k = j; k >= (j-2); k--)
        {
            printf("I=%d J=%d\n", l, k);
        }
    }

    return 0;
}
