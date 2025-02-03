#include<stdio.h>
main()
{
	int i,n,rev,j=1,x,bup;
	
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&x);
	
	while(j<=x)
	{
	
	n=j;
	rev=0;
	bup=n;
	
		while(i<=n)
		{
			i=n%10;
			rev=rev*10+i;
			n=n/10;
		}
		if(rev==bup)
		printf("\n\t  Palindrome Number =%d ",bup);
		j++;
	}
	
}
