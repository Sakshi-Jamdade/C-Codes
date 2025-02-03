#include<stdio.h>
main()
{
	int i=1,n,sum=0;
	printf("\n enter the no =");
	scanf("%d",&n);
	while(i<=n)
	{
		
		printf("\n %d",i);
		sum=sum+i;
		i++;
	}
	printf("\n Addition =%d",sum);
}
