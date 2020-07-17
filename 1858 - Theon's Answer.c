#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=1;
    scanf("%d",&a);
    int ar[a];
    for (b=0;b<a;b++)
    {
        scanf("%d",&ar[b]);
    }
    c=ar[d];
    for (d=0;d<a;d++)
    {
        if (ar[d]<c)
        {
            c=ar[d];
            e=d+1;
        }
    }
    printf("%d\n",e);
}
