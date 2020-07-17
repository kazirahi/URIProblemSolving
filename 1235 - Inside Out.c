#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l,k,j,h;
    char st[102],st1[102];
    scanf("%d",&n);
getchar();
    for (i=0; i<n; i++)
    {
        gets(st);
        l=strlen(st);
        h=l/2;
        k=0;
        for (j=h-1;j>=0;j--){
            st1[k]=st[j];
            k++;
        }
        k=h;
        for (j=l-1;j>=h;j--){
            st1[k]=st[j];
            k++;
        }
        st1[l]='\0';
        puts(st1);
    }
}
