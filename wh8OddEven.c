#include<stdio.h>
main()
{
	int i=2,n;      // i=1  => List Of Odd Numbers...
	                // i=2  => List Of Even Numbers...
	printf("\n\t Enter number = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("\n\t %d",i);
		i=i+2;
	}
}
