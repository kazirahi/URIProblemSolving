#include<stdio.h>
int main()
{
    double j,k[100],n;
    int i;
    scanf("%lf",&n);
    for (i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,n);
        n/=2;

    }
}