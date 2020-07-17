#include<stdio.h>
int main()
{
    int x,h,m,s;

    scanf ("%d",&x);
    h=x/365;
    x%=365;
    m=x/30;
    x%=30;
    s=x;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n",h,m,s);

}

