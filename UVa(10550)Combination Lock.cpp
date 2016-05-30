#include<bits/stdc++.h>
int main()
{
    int a,b,c,d,i,j,k;
    while(scanf("%d %d %d %d",&a,&b,&c,&d))
    {
        if((a==0) && (b==0) && (c==0))
        {
           break;
        }
       int tot=1080;
       if(b>a)
           tot=tot+((40-(b-a))*9);
       else
           tot=tot+((a-b)*9);
        if(b>c)
           tot=tot+((40-(b-c))*9);
        else
           tot=tot+((c-b)*9);
        if(c<d)
           tot=tot+((40-(d-c))*9);
        else
           tot=tot+((c-d)*9);
        printf("%d\n",tot);
    }
    return 0;
}
