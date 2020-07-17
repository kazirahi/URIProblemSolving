#include<stdio.h>
#define pie 3.14159
int main()
{
    double r,c;
    scanf ("%lf", &r);
    c=((4/3.0)*pie*(r*r*r));
    printf("VOLUME = %.3lf\n",c);
}
