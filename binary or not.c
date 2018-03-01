#include <stdio.h>
int main(void) 
{
	int a,b,count1=0,count2=0;
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		count1++;
		if(b==1||b==0)
		count2++;
		a=a/10;
	}
	if(count1==count2)
	printf("yes");
	else
	printf("no");
	return 0;
}
