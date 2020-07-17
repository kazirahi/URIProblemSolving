#include<stdio.h>
int main()
{
    int i,n,a;
    char ar[1000];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s %d",&ar,&a);
        if (ar[0]=='T' && ar[1]=='h' && ar[2]=='o' && ar[3]=='r')
            printf("Y\n");
        else
            printf("N\n");
    }
}
