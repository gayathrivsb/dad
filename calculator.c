#include <stdio.h>
int main()
{
 int n1,n2,a;
scanf("%d %d %d",&a,&n1,&n2);
switch(a)
{
	case 1:
	printf("%d",n1/n2);
	break;
	case 2:
	printf("%d",n1%n2);
	break;
	default:
	printf("enter a valid ch");
	break;
}
return 0;
}
