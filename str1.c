#include<stdio.h>
main()
{
	int i,fact,n;
	printf("\n enter the number");
	scanf("%d",&n);
	
	while(n>0)
	{
		fact=1;
		i=n%10;
		while(i>n)
		{
			fact=fact*i;
			+sum=sum+fact;
			i++;
		}
		n=n/10;
		
		
	}
}
