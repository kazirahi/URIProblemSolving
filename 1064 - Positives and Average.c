#include<stdio.h>
int main()
{
    double i,n, count=0,sum=0,avg;
    for (i=1;i<=6;i++)
    {
        scanf("%lf",&n);
        if (n>0)
        {
            count++;
            sum+=n;

        }
    }printf("%.lf valores positivos\n%.1lf\n",count,sum/count);

}
