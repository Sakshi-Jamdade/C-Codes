#include<stdio.h>
main()
{
	int i,n,fact,sum,j=1,x,bup;
	
	printf("\n\t Enter Upper Limit =");
	scanf("%d",&x);
	
	while(j<=x)
	{
		n=j;
		sum=0;
		bup=n;
		fact=1;
		i=1;
		
		while(n>0)
		{
			fact=1;
			i=n%10;
			
			while(i>1)
			{
				fact=fact * i;
				i--;
			}
			n=n/10;
			sum=sum+fact;
		}
		if(bup==sum)
			printf("\n\t  Strong Number =%d ",bup);
            j++;
	}
}
