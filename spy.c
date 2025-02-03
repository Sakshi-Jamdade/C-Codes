#include<stdio.h>
main()
{
	int i,n,sum=0,mul=1,bup;
	
	printf("\n\t Enter the Number :");
	scanf("%d",&n);
	
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
	else
			printf("\n %d is not spy no",bup);
}
