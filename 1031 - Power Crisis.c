#include <stdio.h>



int main()
{
    int n, x, y, j, num, pulo;
    while(1)
    {
        scanf("%d",&n);
        if(n == 0) break;
        y = 1;
        for(;;)
        {
            int i,r = 0;
            for (i = 1; i < n; i++)
                r = (r + y) % i;
            if (r!=11)y++;

            else break;
        }
        printf("%d\n",y);
    }
    return 0;
}
