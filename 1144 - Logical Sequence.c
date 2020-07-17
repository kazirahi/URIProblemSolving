#include<stdio.h>
int main()
{
    int x,i,j,a,b,c,d;
    scanf("%d",&x);
    for (j=1; j<=x; j++)
    {
        a=j*j;
        b=j*j*j;
        printf("%d %d %d\n",j,a,b);
        c=a+1;
        d=b+1;
        printf("%d %d %d\n",j,c,d);
    }
}
