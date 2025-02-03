#include<stdio.h>
main()
{
	int i,n,sum,sq,j=1,x;
	
	printf("\n\t Enter the Number :");
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
				printf("\n %d is a neon no",n);
		
		j++;
	}
}
