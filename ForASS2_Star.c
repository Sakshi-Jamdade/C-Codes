#include<stdio.h>
main()
{
	int i,n,j;
	printf("\n\t Enter Number =");
	scanf("%d",&n);
	
	for(i=n;i>0;i--)
	{
		printf("\n\t");
		for(j=1;j<=n-i+1;j++)
		{
			printf("*");
		}
		for(j=0;j<i*2-2;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++)
		{
			printf("*");
		}
	}
		for(i=1;i<=n;i++)
	{
		printf("\n\t");
		for(j=1;j<=n-i+1;j++)
		{
			printf("*");
		}
		for(j=0;j<i*2-2;j++)
		{
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++)
		{
			printf("*");
		}
	}
}
