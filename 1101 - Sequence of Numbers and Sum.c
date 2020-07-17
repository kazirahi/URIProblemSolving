#include<stdio.h>
int main()
{
    int i,j,x,y,sum;

    while (1)
    {
        scanf("%d %d",&x,&y);
        if (x<=0 || y<=0)
        {
            break;
        }
        else if (x<y)
        {
            sum=0;
            for (j=x; j<=y; j++)
            {
                sum+=j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",sum);
        }
        else
        {
            sum=0;
            for (j=y; j<=x; j++)
            {
                sum+=j;
                printf("%d ",j);
            }
            printf("Sum=%d\n",sum);
        }
    }
}
