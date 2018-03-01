#include<stdio.h>
int main()
{
int i,k,temp;
scanf("%d%d",&i,&k);
printf("before swap i=%d k=%d",i,k);
temp=k;
k=i;
i=temp;

printf("after swap i=%d k=%d",i,k);
return 0;
}
