#include<stdio.h>
main()
{
	int i,n,sum,mul,bup,j=1,x;
	
	printf("\n\t Enter the Number :");
	scanf("%d",&x);
	while(j<x)
	{
	n=j;
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
				printf("\n %d is a spy no",bup);
		j++;
	}
}
