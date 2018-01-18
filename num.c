#include<stdio.h>                  
main()
{
int n,rev=0;     
printf("enter no");
scanf("%d",&n); 
while(n!=0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
return 0;
}
