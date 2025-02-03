#include<stdio.h>
main()
{
	int i,n,sum,mul,bup,j,x;
	printf("\n\t Enter the Number =");
	scanf("%d",&x);
	
	for(j=1;j<=x;j++)
	{
	
		for(sum=0,mul=1,n=j,bup=n;n>0;n=n/10)
		{
			i=n%10;
			sum=sum+i;
			mul=mul*i;
			
		}
		
		if(sum==mul)
			printf("\n\t %d is Spy Number",bup);
	}
}
