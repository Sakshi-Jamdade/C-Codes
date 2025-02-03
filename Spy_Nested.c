#include<stdio.h>
main()
{
	int i,n,sum,mul,j=1,x,bup;
	
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&x);
	

	while(j<=x)
	{
	
	n=j;
	i=1;
	sum=0;
	mul=1;
	bup=n;
	
		while(n>0)
		{
			i=n%10;
			sum=sum+i;
			mul=mul*i;
			n=n/10;
		}
		
		if(mul==sum)
		printf("\n\t  Spy Number =%d ",bup);
		j++;
	}
	
}
