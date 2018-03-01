#include <stdio.h>
    int main(void) 
    {
    int m=0,g=1,k,n,i;
     scanf("%d",&n);
     printf("%d\t%d",m,g);
     for(i=2;i<=n;i++)
    {
      k=m+g;	
      printf("\t%d\t",k);
      m=g;
      g=k;
    }
    	return 0;
}
