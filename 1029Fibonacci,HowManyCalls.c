#include<stdio.h>
int count,call;
int main()
{
    int n,i,x;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&x);
        count=0;
        call=0;
        int res=fib(x);
        printf("fib(%d) = %d calls = %d\n",x,call-1,count);
    }
}

int fib(int x)
{
    if (x==0)
    {
        call++;
        return 0;
    }
    else if (x==1)
    {
        call++;
        count++;
        return 1;
    }
    else
    {
        call++;
        return (fib(x-1)+fib(x-2));
    }
}
