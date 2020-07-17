#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n],l,p;
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    l=99999999;
    for (i=0;i<n;i++)
    {
        if (ar[i]<l)
        {
            l=ar[i];
            p=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",l,p);
}
