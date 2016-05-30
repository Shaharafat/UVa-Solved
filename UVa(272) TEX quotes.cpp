#include<bits/stdc++.h>
int main()
{
    char str[10000];
    int len,i,j=1,k,l;
    while(gets(str))
    {
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='\"')
            {
                if((j%2) != 0)
                    {
                        printf("``");
                        j++;
                    }
                else
                    {
                        printf("''");
                        j++;
                    }
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }
}
