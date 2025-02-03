#include<stdio.h>
main()
{
	int i,n,j;
	printf("\n\t Enter Number =");
	scanf("%d",&n);
	
	for(i=1;j<=n;i++)
	{
		printf("\n\t");
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	}
}
