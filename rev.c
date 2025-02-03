#include<stdio.h>
main()
{
	int i,n,sq,rev=0;
	printf("\n enter the nmber");
	scanf("%d",&n);

	while(n>0)
	{
		sq=n%10;
		rev=rev*10+sq;
		n=n/10;
	
	}
	printf("\n  reverse number is %d",rev);
	
}
