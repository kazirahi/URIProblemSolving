#include<stdio.h>
int main()
{
    int i,ar[10],v;


        scanf("%d",&v);

    for (i=0; i<10; i++)
    {
        ar[i]=v;
        printf("N[%d] = %d\n",i,ar[i]);
        v*=2;
    }

}
