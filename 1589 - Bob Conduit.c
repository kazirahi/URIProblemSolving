#include<stdio.h>
int main()
{
    int a,r,rr,n,s;
    scanf ("%d",&a);
    for (n=1;n<=a;n++)
    {
        scanf ("%d %d",&rr,&r);
        s=rr+r;
        printf("%d\n",s);
    }
}

