#include<stdio.h>
int main()
{
    double i,n, count=0;
    for (i=1;i<=6;i++)
    {
        scanf("%lf",&n);
        if (n>0)
        {
            count++;
        }
    }printf("%.lf valores positivos\n",count);
}

