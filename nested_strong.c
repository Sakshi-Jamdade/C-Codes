#include<stdio.h>
main()
{
	int i,n,sum,bup,fact,j,x;
	
	printf("\n\t Enter the Number :");
	scanf("%d",&x);
	
	while(n<x)
	{
	n=j;
	sum=0;
	fact=1;
	bup=n;
		while(i<=n)
		{
			fact=fact*i;
			//i=n%10;
			sum=sum*fact;
			//mul=mul*i;
			//n=n/10;
			i++;
		}
		
		if(fact==sum)
				printf("\n %d is a spy no",bup);
	j++;
 	}
}
