#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    scanf ("%d %d",&x,&y);
    if (x<y)
    {
        for (i=x; i<=y; i++)
        {
            if (i%13!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);

    }
    if (x>y)
    {
        for (i=y; i<=x; i++)
        {
            if (i%13!=0)
            {
                sum+=i;
            }
        }
        printf("%d\n",sum);

    }

}
