#include<stdio.h>
int main()
{
    int n,i,x,j,s;
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf("%d",&x);
        s=0;
        for (j=2; j<=x/2; j++)
        {

            if (x%j==0)
            {
                s=1;
                break;
            }
        }
        if (s==0)
        {
            printf("%d eh primo\n",x);
        }
        else
        {
            printf("%d nao eh primo\n",x);
        }
    }
}
