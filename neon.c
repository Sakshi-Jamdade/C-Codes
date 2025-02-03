#include<stdio.h>
main()
{
	int i,n,sum=0,sq;
	
	printf("\n\t Enter the Number :");
	scanf("%d",&n);
	
	//bup=n;
	sq=n*n;
	while(sq>0)
	{
		i=sq%10;
		sum=sum+i;
		sq=sq/10;
	}
	
	if(n==sum)
			printf("\n %d is a neon no",n);
	else
			printf("\n %d is not neon no",n);
}
