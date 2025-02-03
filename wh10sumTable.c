#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("\n\t Enter number = ");
	scanf("%d",&n);
	while(i<=10)  // (sum<n*10)
	{
		sum=sum+n;
		printf("\n\t %d",sum);
		i++;
	}
}
