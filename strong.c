#include<stdio.h>
main()
{
	int i,n,sum=0,mul=1,bup,fact=1;
	
	printf("\n\t Enter the Number :");
	scanf("%d",&n);
	
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
	else
			printf("\n %d is not spy no",bup);
}
