#include<stdio.h>
int main()
{
    int n,i,j,x,y,sum;
    scanf("%d",&n);
   for (j=1;j<=n;j++){
        scanf("%d %d",&x,&y);
    if (x%2==1)
    {
        sum=0;
        for (i=1; i<=y; i++)
        {
            sum+=x;
            x+=2;
        }
        printf("%d\n",sum);
    }
    else
    {
        x++;
        sum=0;
        for (i=1; i<=y; i++)
        {
            sum+=x;
            x+=2;
        }
        printf("%d\n",sum);

    }
   }
}
