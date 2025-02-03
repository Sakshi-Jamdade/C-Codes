#include<stdio.h>
main()
{
	int i,j,n,k=1;
	printf("\n\t Enter the Number :");
	scanf("%d",&n);
	
	for(i=65;i<65+n;i++)
	{
	  printf("\n\t");
		for(j=65;j<=i;j++,k++)
		{
			printf("%3d=%d",k,k);
		}
	}	
}
