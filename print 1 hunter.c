#include<stdio.h>
int main()
{
	int i,j,n,a=1;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			printf("%d\t",a);
		}
		printf("\n");
	}
return 0;
}
