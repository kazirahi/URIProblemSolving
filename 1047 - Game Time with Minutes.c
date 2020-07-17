#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,r,f;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    r=(c-a);
    if (r<0)
    {
        r= 24+ ( c-a);
    }

    f=d-b;
    if (f<0)
    {
        f=60+(d-b);
        r--;
    }

    if (a==c && b==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",r,f);
    }

}

