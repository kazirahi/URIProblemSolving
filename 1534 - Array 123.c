#include<stdio.h>
int main()
{
    int n,i,j;
    while(1 == scanf("%d",&n))
    {
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=n; j++)
            {
                if (i+j==n+1)
                {
                    printf("2");
                }
                else if (i==j)
                {
                    printf ("1");
                }

                else
                {
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
