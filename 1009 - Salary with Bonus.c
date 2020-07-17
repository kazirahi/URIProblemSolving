#include<stdio.h>
int main()
{
    char c;
    double a,b,total;
    scanf ("%s %lf %lf",&c,&a,&b);
    total= a+(b*15)/100;
    printf ("TOTAL = R$ %.2lf\n",total);
}

