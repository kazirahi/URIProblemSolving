#include<stdio.h>
int main()
{
    int n,x=0,y=0,z=0;
    while (1)
    {
        scanf("%d",&n);
        if (n==1)
        {
            x++;
        }
        else if (n==2)
        {
            y++;
        }
        else if (n==3)
        {
            z++;
        }
        else if (n==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",x,y,z);
}
