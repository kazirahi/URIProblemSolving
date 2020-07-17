#include<stdio.h>
int main()
{
    int n,i,j;
    double total=0,count=0,avg,ar[12][12];
    char c[2];
    scanf("%d",&n);
    scanf("%s",&c);
    for (i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&ar[i][j]);
            if (j==n)
                total+=ar[i][j];
        }
    }

    if (c[0]=='M')
    {
        avg=total/12.0;
        printf("%.1lf\n",avg);
    }
    else if (c[0]=='S')
    {
        printf("%.1f\n",total);
    }
}
