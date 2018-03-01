#include<stdio.h>
int main()
{
int i,k;
scanf("%d%d",&i,&k);
printf("before swap i=%d k=%d",i,k);
k=k^i;
i=k^i;
k=k^i;
printf("after swap i=%d k=%d",i,k);
return 0;
}
