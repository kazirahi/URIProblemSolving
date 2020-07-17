#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l,m,o,p,q,r,t;
    char st[100],st1[100],st2[100];
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%s",st);
        scanf("%s",st1);
        l=strlen(st);
        m=strlen(st1);
        if (l>=m)
        {
            for (t=0,o=0; t<2*m; t++,o++)
            {
                st2[t]=st[o];
                t++;
                st2[t]=st1[o];
            }
            for (t,p=m; p<l; t++,p++)
            {
                st2[t]=st[p];
            }
            st2[t]='\0';

        }
        else
        {
            for (t=0,o=0; t<2*l; t++,o++)
            {
                st2[t]=st[o];
                t++;
                st2[t]=st1[o];
            }
            for (t,p=l; p<m; t++,p++)
            {
                st2[t]=st1[p];
            }
            st2[t]='\0';
        }
        printf("%s\n",st2);
    }
}
