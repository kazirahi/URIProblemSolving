#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,c,z;
    long long x;
    char num[101],change[101];
    while (1)
    {
        scanf("%d %s",&n,&num);
        if (n==0 && num[0]=='0')
        {
            break;
        }
        i=0;
        j=0;
        c=0;
        z=0;
        x=0;
        while(1)
        {
            if (num[i]=='\0')
            {
                break;
            }

            else if (num[i]==n+48)
            {
                i++;
            }
            else
            {
                change[j]=num[i];
                if (j==z)c++;
                if (num[i]=='0')z++;

                i++;
                j++;
            }

        }

        change[j]='\0';

        if (j == 0)
        {
            printf("0\n");
        }
        else if (j==z)
        {
            printf("%lld\n",x);
        }
        else if (c>0)
        {
            for (k=c-1; change[k]!='\0'; k++)
            {
                printf("%d",change[k]-48);
            }printf("\n");
        }
        else
        {
            printf("%s\n",change);
        }
    }
}
