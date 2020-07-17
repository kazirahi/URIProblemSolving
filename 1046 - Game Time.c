#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,r;
    scanf("%d %d", &a, &b);
    r=(b-a);
    if (r<0)
    {
        r=24+(b-a);
    }
    if (a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",r);
    }

}

