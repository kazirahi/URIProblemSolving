#include<stdio.h>
int main()
{
    int n,x,i;
    char ch,q='%';
    float c,r,s,tc=0,ts=0,tr=0,sum=0;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d %c",&x,&ch);
        sum+=x;
        if (ch=='C')
        {
            tc+=x;
        }
        else if (ch=='R')
        {
            tr+=x;
        }
        else if (ch=='S')
        {
            ts+=x;
        }

    }
    c=tc/sum*100;
    r=tr/sum*100;
    s=ts/sum*100;
    printf("Total: %.f cobaias\nTotal de coelhos: %.f\nTotal de ratos: %.f\nTotal de sapos: %.f\nPercentual de coelhos: %.2f %c\nPercentual de ratos: %.2f %c\nPercentual de sapos: %.2f %c\n",sum,tc,tr,ts,c,q,r,q,s,q);
}

