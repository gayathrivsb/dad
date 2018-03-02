#include <stdio.h>
int main(void) 
{
	char b[50];
	int a;
	scanf("%[^\n]s",b);
	for(a=0;b[a]!='\0';a++)
	{
	if(b[a]>='0'&&b[a]<='9')
	printf("%c",b[a]);
	}
	return 0;
}
