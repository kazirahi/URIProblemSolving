#include<stdio.h>
int main()
{
    int a,i,b=0,c=1,temp=0;
    scanf("%d",&a);

    for (i=1; i<a; i++)
    {


        temp=b+c;
        printf("%d ",b);
        b=c;
        c=temp;


    }
    printf("%d\n",b);
}
