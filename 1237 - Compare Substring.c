#include<stdio.h>
#include<string.h>
int main()
{
    char st[102],st1[102];
    int l,ll,i,j,c=0,k,rem;
    while(gets(st)&&gets(st1))
    {rem=0;

        l=strlen(st);
        ll=strlen(st1);

        for (i=0; i<l; i++)
        {
            for (j=0; j<ll; j++)
            {
                if (st[i]==st1[j])
                {
                    c=0;
                    for (k=0; k+i<l,k+j<ll; k++)
                    {
                        if (st[k+i]!=st1[k+j])

                            break;
                            c++;

                    }
                    if (c>rem)
                    {
                        rem=c;
                    }

                }
            }
        }
        printf("%d\n",rem);

    }
    return 0;
}
