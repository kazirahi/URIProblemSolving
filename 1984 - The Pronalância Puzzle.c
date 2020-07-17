#include<stdio.h>
int main()
{
    long long int a,rr,r=0;
    while ((scanf ("%lld",&a)!= EOF))
    {
        while(a){
            rr=a%10;
        a/=10;
        printf("%lld",rr);
        }
        printf("\n");
    }

}
