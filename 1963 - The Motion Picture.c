#include<stdio.h>
int main()
{
    double a,b,p;
    char c='%';
    scanf("%lf %lf",&a,&b);
    p=(((b-a)/a)*100);
    if (p>=0)
    printf("%.2lf%c\n",p,c);

}
