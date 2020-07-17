#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for (j=1; j<=x; j++)
    {

        printf("%d %d %d",j,j*j,j*j*j);
        printf("\n");
    }
}
