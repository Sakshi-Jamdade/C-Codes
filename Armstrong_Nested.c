#include<stdio.h>
main()
{
	int i,n,sum,j=1,x,bup;
	
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&x);
	

	while(j<=x)
	{
	
	n=j;
	sum=0;
	bup=n;
	
		while(n>0)
		{
			i=n%10;
			sum=sum+(i*i*i);
			n=n/10;
		}
		
		if(sum==bup)
		printf("\n\t  Armstrong Number =%d ",bup);
		j++;
	}
	
}
