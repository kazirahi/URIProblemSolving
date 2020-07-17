#include<stdio.h>
int main()
{
    int i,n, count=0,sum=0,pos=0,neg=0;
    for (i=1; i<=5; i++)
    {
        scanf("%d",&n);
        if (n%2==0)
        {
            count++;
        }
        if (n%2==1|| n%2==-1)
        {
            sum++;
        }
        if (n<0)
        {
            neg++;
        }
        if (n>0)
        {
            pos++;
        }

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count,sum,pos,neg);

}

