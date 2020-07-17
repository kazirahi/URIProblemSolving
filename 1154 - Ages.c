#include<stdio.h>
int main()
{
    int x,i,count=0,sum=0;
    double t;
    while(1)
    {
        scanf("%d",&x);
        if (x<0)
        {
            break;
        }
        else
        {

            sum+=x;
            count++;
        }

    }
    t=(double)sum/(double)count;
    printf("%.2lf\n",t);
}
