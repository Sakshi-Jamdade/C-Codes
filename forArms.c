#include<stdio.h>
main()
{
	int i,n,sum,bup,j,x;
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&x);
	
	for(j=1;j<=x;j++)
	{
	i=1;
	//n=j;
	
	
		//bup=n;
		for(bup=n,n=j,sum=0;n>0;n=n/10)
		{
			i=n%10;
			sum=sum+(i*i*i);
			//n=n/10;
		}
		
		if(j==sum)
			printf("\n\t Armstrong Number=%d",j);
   }

}
