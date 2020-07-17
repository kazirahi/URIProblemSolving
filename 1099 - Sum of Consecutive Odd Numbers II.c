#include<stdio.h>
int main()
{
    int n,x,y,i,k,sum;
    scanf ("%d",&n);
    for (i=1; i<=n; i++)
    {
        scanf ("%d %d",&x,&y);
        if (x==y)
        {
            sum=0;
            printf("%d\n",sum);
        }
        else if (x<y)
        {
            sum=0;
            for (k=x+1; k<y; k++)

            {

                if (k%2==1 || k%2==-1)
                {
                    sum+=k;
                }
            }
            printf ("%d\n",sum);

        }
        else
        {
            sum=0;
            for (k=y+1; k<x; k++)
            {

                if (k%2==1 || k%2==-1)
                {
                    sum+=k;
                }
            }
            printf ("%d\n",sum);
        }

    }
}
