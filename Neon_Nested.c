#include<stdio.h>
main()
{
	int i,n,sum,j=1,x,sq;
	
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&x);
	

	while(j<=x)
	{
	
	n=j;
	sum=0;
	i=1;
	sq=n*n;
		while(sq>0)
		{
			i=sq%10;
			sum=sum+i;
			sq=sq/10;
		}
		
		if(n==sum)
		printf("\n\t  Neon Number =%d ",n);
		j++;
	}
	
}
