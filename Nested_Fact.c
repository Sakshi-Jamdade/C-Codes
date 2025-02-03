#include<stdio.h>
main()
{
	int i,n,fact,j=1,x;
	
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&x);
	
	while(j<=x)
	{
	
	n=j;
	i=1;
	fact=1;
	
		while(i<=n)
		{
			fact=fact * i;
			i++;
		}
		printf("\n\t  factorial =%d ",fact);
		j++;
	}
	
}
