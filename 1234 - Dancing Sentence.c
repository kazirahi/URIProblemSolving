#include<stdio.h>
int main()
{
    char st[1000];
    int i,n;
    while (gets(st)!=NULL)
    {

        int l=strlen(st);
        n=0;
        for (i=0; i<l; i++)
        {
            if (st[i] != ' ')
            {
                n++;
                if (n%2!=0)
                {
                    if (st[i]>='a' && st[i]<='z')
                    {
                        st[i]=st[i]-32;

                    }
                    else
                    {
                        st[i]=st[i];
                    }
                }
                else
                {
                    if (st[i]>='A' && st[i]<='Z')
                    {
                        st[i]=st[i]+32;

                    }
                    else
                    {
                        st[i]=st[i];
                    }

                }

            }


        }

        printf("%s\n",st);
    }
}
