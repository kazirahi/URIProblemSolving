#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for (i=1;i<=x*4;i+=4)
    {
        for (j=i;j<=i+2;j++)
        {
            printf("%d ",j);
        }printf("PUM\n");
    }
}
