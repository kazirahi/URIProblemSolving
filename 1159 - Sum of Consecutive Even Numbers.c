#include<stdio.h>
int main()
{
    int x,y,sum,count=0;
    while(1)
    {
        scanf("%d",&x);
        sum=0;
        if (x==0)
        {
            break;
        }
        else if (x%2==0)
        {

            for (y=x; y<=x+8; y+=2)
                sum+=y;

        }
        else
        {

            for (y=x+1; y<=x+9; y+=2)
                sum+=y;
        }

        printf("%d\n",sum);
    }
}
