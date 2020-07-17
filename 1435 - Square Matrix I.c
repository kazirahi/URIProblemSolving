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
                for (j=1; j<=n; j++)
                {
                    min=i;
                    if (j<min)
                        min=j;
                    if (n-i+1<min)
                        min=n-i+1;
                    if (n-j+1<min)
                        min=n-j+1;
                    printf ("%3d",min);
                    if (j<n)
                        printf(" ");
                    else
                        printf("\n");

                }

            }
            printf("\n");
        }
    }
}
