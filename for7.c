#include<stdio.h>
main()
{
	int i,j,n;
	printf("\n\t Enter the Number :");
	scanf("%d",&n);
	
	for(i=65;i<=65+n;i++)
	{
	  printf("\n\t");
		for(j=65;j<=i;j++)
		{
			printf("%3d",i);
		}
	}	
}
