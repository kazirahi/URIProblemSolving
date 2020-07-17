#include<stdio.h>
int main()
{
    int a,i,n,x;
    double b,max=0.0;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %lf",&a,&b);
        if (b>max)
        {
            max=b;
            x=a;
        }

    }
    if (max<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",x);
}

