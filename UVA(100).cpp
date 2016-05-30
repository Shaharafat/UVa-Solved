#include<stdio.h>
int main()
{
   int i,j,m,k,c,l,temp;
   while(scanf("%d %d",&i,&j) != EOF){
   k=i;
   l=j;
   if(i>j)
   {
      temp=i;
      i=j;
      j=temp;
   }
   m=0;
   while(i<=j)
   {
      c=1;
      unsigned int n=i;
      while(n!=1)
      {
         if((n%2)==0)
         n=n/2;
         else
         n=(3*n)+1;
         c++;
      }
      if(c>=m)
      m=c;
      i++;
   }
   printf("%d %d %d\n",k,l,m);
   }
   return 0;
}
