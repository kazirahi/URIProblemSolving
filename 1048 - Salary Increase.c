
#include<stdio.h>
int main()
{
    double s,v,t,n,p;
    char ch='%';
    scanf("%lf",&s);
    if (s>=0 && s<=400.00)
    {
        v=0.15;
    }
    else if (s<=400.01 && s<=800.00)
    {
        v= 0.12;
    }
    else if (s>=800.01 && s<=1200.00)
    {
        v=0.1;
    }
    else if (s>=1200.01 && s<=2000.00)
    {
        v= 0.07;
    }
    else
    {
        v=0.04;
    }
    n=s*v;
    t=n+s;
    p=v*100;
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.lf %c\n",t,n,p,ch);

}
