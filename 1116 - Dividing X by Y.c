#include<stdio.h>
int main()
{
    int x,y;
    double d;
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d %d", &x,&y);
        d=x/(y*1.00);
        if (y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n",d);
        }
    }
}
