#include<stdio.h>
int main()
{
   char a[20];
   int i,n,sum=0;
   scanf("%s%d",a,&n);
   for(i=0;i<=n;i++)
   {
   	if((a[i]>='a')&&(a[i]<='z'))
   	sum=sum+a[i];
   	
   }
   printf("%d",sum);
   return 0;
   }
