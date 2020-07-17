#include<stdio.h>
int main()
{
    int n,i,sum;
    char st[101];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",st);
        int j=0;
        sum=0;
        while(1){
            if (st[j]=='\0')break;
            else if (st[j]=='2' || st[j]=='3' || st[j]=='5'){
                sum+=5;
                j++;
            }else if (st[j]=='6' || st[j]=='9' || st[j]=='0'){
                sum+=6;
                j++;
            }else if (st[j]=='1'){
                sum+=2;
                j++;
            }else if (st[j]=='4'){
                sum+=4;
                j++;
            }else if (st[j]=='7'){
                sum+=3;
                j++;
            }else if (st[j]=='8'){
                sum+=7;
                j++;
            }
        }printf("%d leds\n",sum);
    }
}
