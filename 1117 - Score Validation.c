#include<stdio.h>
int main()
{
    double i,x,y,c=0,d=0,e;
    while(1)
    {

        if (d==2)
        {
            break;
        }
        scanf("%lf", &x);
        if (x>=0 && x<=10)
        {
            d++;
            c+=x;
        }
        else
        {
            printf("nota invalida\n");

        }

    }
    e=c/2.00;
    printf("media = %.2lf\n",e);

}
