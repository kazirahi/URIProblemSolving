#include<stdio.h>
int main()
{
    int a,b,e,f;
    float c,g,d;
    scanf ("%d %d %f",&a,&b,&c);
    scanf ("%d %d %f",&e,&f,&d);
    g=(b*c)+(f*d);
    printf("VALOR A PAGAR: R$ %.2f\n",g);
}

