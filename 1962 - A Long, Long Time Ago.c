#include<stdio.h>
int main()
{
    int y,a,b,c;
    scanf("%d",&b);
    for (a=1;a<=b;a++)
    {
        scanf("%d",&c);
        if (c<2015)
        {
            y=2015-c;
            printf("%d D.C.\n",y);
        }
        else
        {
            y=c-2014;
            printf("%d A.C.\n",y);
        }
    }
}
