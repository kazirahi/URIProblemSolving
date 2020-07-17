#include<stdio.h>
int main()
{
    int i;
    double ar[100];

    for (i=0; i<100; i++)
    {
        scanf("%lf",&ar[i]);
    }
    for (i=0; i<100; i++)
    {

        if ( ar[i]<=10.0){
        printf("A[%d] = %.1lf\n",i,ar[i]);
        }

    }

}
