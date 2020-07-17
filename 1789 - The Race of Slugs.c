#include<stdio.h>
int main()
{
    int n,a,i,max=0;
    while(scanf("%d",&n)!=EOF)
    {
        max=0;
        for (a=1; a<=n; a++){
            scanf("%d",&i);
            if (i>max)
            max=i;
        }
            if (max<10)
                printf("1\n");
            else if (max<20)
                printf("2\n");
            else
                printf("3\n");


    }
}
