#include<stdio.h>

main()
{
	int d,m=0,y=0;
	printf("\n\t Enter Days =");
	scanf("%d",&d);
	
	while(d>=30)
	{
		d=d-30;
		m++;
	}
	
	while(m>=12)
	{
		m=m-12;
		y++;
	}
	
	printf("\n\t Years =%d \n\t Months =%d \n\t Days =%d",y,m,d);
}
