#include<stdio.h>
int main()
{
    long long n,x,i=0,o=0,k;
    scanf("%lld", &n);
    for (k=1;k<=n;k++)
    {
        scanf("%lld",&x);
        if (x>=10 && x<=20)
        {
            i++;
        }
        else
        {
            o++;
        }
    }
    printf("%lld in\n%lld out\n",i,o);
}

