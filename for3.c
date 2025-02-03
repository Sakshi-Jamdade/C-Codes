#include<stdio.h>
main()
{
	int i,j,n,k=1;
	printf("\n\t Enter the Number :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
	  printf("\n\t");
		for(j=1;j<=i;j++,k++)
		{
			printf(" %d",k);
		}
	}	
}
