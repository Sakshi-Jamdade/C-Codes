#include<stdio.h>
main()
{
	int sum=0,mul=1,i,n;
	printf("\n enter the number :");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		
		sum=sum+i;
		mul=mul*i;
		n=n/10;
		
	}
	printf("\n%d",sum);
	printf("\n%d",mul);
	if(sum==mul)
	printf("\n this is a spy number ");
	else 
	printf("\n this is not spy number");
}
