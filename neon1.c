#include<stdio.h>
main()
{
	int sum=0,sq,n,i; 
	printf("\n enter the number :");
	scanf("%d",&n);
	
	while(n>0)
	{
		sq=n*n;
		printf("\n%d",sq);
		sq=n%10;
		sum=sum+sq;
		n=n/10;
		
		
	}
	
	
	if(sum==sq)
	printf("\n this is a neon number ");
	else 
	printf("\n this is not neon number");
	
}
