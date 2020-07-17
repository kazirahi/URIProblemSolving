#include<stdio.h>
int main()
{
    int i,j=19;
    int ar[20],arr[20];

    for (i=0; i<20; i++)
    {
        scanf("%d",&ar[i]);

    }
    for (i=0; i<20; i++)
    {

        arr[j]=ar[i];
        j--;
    }
    for (i=0,j=0; i<20,j<20; i++,j++)
    {


        printf("N[%d] = %d\n",i,arr[j]);


    }

}
