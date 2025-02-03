#include<stdio.h>
#include<math.h>
main()
{
	int i,n,sum=0,bup,len;
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&n);
	
	
	bup=n;
	for(;n>0;n=n/10)
	{
		i=i%10;
		len++;
	}
	n=bup;
		
		for(;n>0;n=n/10)
		{
			i=n%10;
			sum=sum+pow(i,len);
			//n=n/10;
		}
		
		if(sum==bup)
			printf("\n\t Armstrong Number=%d",bup);
}
