#include<stdio.h>
int main()
{
    int i,ar[4],b,c,d,temp,f;
    for (i=0;i<4;i++)
    {
        scanf ("%d",&ar[i]);
    }
    for (i=0;i<4;i++)
    {
        for (c=i+1;c<4;c++)
        if (ar[c]<ar[i])
        {
            temp=ar[i];
            ar[i]=ar[c];
            ar[c]=temp;
        }
    }
    d=ar[0]+ar[1];
    f=ar[1]+ar[2];
    if (ar[3]<f || ar[2]<d)
        printf("S\n");
    else
        printf("N\n");
}
