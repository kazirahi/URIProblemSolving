#include<stdio.h>
int main()
{
    int n,i,j,k,p=11;
    double total=0,count=0,avg,ar[12][12];
    char c[2];

    scanf("%s",&c);
    for (i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&ar[i][j]);


        }
    }
    for (k=1;k<12;k++)
    {
        for (n=11;n>=p;n--)
        {
            total+=ar[k][n];
            count++;
        }
        p--;
    }

    if (c[0]=='M')
    {
        avg=total/count;
        printf("%.1lf\n",avg);
    }
    else if (c[0]=='S')
    {
        printf("%.1f\n",total);
    }
}
