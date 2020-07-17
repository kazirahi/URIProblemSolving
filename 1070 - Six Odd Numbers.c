#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for (i=n+1; i<=n+11; i++)
    {
        if (i%2==1)
        {
            printf("%d\n",i);
        }
    }
}

