#include<stdio.h>
#include<math.h>
int main()
{
    float n,a,b,c,x;
    float y;
    while(1)
    {
        scanf ("%f",&n);
        if (n==0)
        {
            break;
        }
        else
        {
            scanf("%f %f",&b,&c);
            x=(((n*b)/c)*100);
            y=sqrt(x);
            printf("%d\n",(int)y);
        }
    }
}
