#include<stdio.h>
int main()
{
    int a,b,c,d=0,i;
    scanf("%d",&a);
    do
    {
        scanf("%d",&b);
    }
    while(a>=b);
    for (i=a,c=0; c<b; i++)
    {
        c+=i;
        d++;
    }
    printf("%d\n",d);
}
