#include<stdio.h>
int main()
{
    int a,n,i,j=0;
    scanf ("%d %d",&a,&n);
    while (n<=0)
    {
        scanf("%d",&n);
    }
    for (i=1; i<=n; i++)
    {
        j+=a;
        a++;
    }
    printf("%d\n",j);
}



