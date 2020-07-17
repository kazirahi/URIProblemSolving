#include<stdio.h>
int main()
{
    int n,i,j,k,min;
    while(1)
    {
        scanf("%d",&n);
        if (n==0)
        {
            break;
        }
        else
        {
            for (i=1; i<=n; i++)
            {
                printf ("%3d",i);
                for (j=i-1; j>=1; j--)
                {
                    printf (" %3d",j);

                }
                for (j=2;j<=n-i+1;j++)
                {
                    printf (" %3d",j);
                }
                printf ("\n");

            }
            printf("\n");
        }
    }
}
