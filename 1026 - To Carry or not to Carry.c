#include<stdio.h>
int main()
{
    unsigned a,b,s;
    while((scanf("%u %u",&a,&b)==2)){
        s=a^b;
        printf("%u\n",s);
    }
}
