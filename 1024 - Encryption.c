#include<stdio.h>
#include<string.h>
int main()
{
    int a,count=0,i,ee=0,j,l,f,m;
    char s[1000],qq[1000];
    scanf("%d",&f);
    getchar();
    for (m=1; m<=f; m++)
    {
        gets(s);
        j=strlen(s);

        for (a=0; a<j ; a++)
        {
            if ((s[a]>='A' && s[a]<='Z') || (s[a]>='a' && s[a]<='z'))
            {
                s[a]=s[a]+3;
            }


        }
        int n=0;
        for(i=j-1; i>=0; i--)
        {
            qq[n]=s[i];
            n++;
        }
        qq[n]='\0';
        j=a/2;
        for(i=j; i<a; i++)
        {
            qq[i]=qq[i]-1;
        }
        printf("%s\n",qq);
    }
    return 0;
}
