#include<stdio.h>
int main()
{
    int l,w,line;
    unsigned int c,character;
    char st[101];
    while(scanf("%d %d %u",&w,&l,&c)==3)
    {
        line=1;
        character=0;
        while(w--)
        {
            scanf("%s",st);
            int ll=strlen(st);
            if ((character+ll)<=c)
            {
                character+=ll+1;
            }
            else
            {
                character=ll+1;
                line++;
            }
        }
        if (line%l !=0)
        {
            printf("%d\n",line/l+1);
        }

        else
        {
            printf("%d\n",line/l);
        }

    }
    return 0;
}
