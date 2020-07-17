#include<stdio.h>
int main()
{
    double a,b,d=0;
    for (a=1;a<=100;a++)
    {
        b=1/a;
        d+=b;
    }
    printf("%.2lf\n",d);
}
