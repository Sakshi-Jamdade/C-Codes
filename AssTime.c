#include<stdio.h>

main()
{
	int s,m=0,h=0;
	printf("\n\t Enter Seconds =");
	scanf("%d",&s);
	
	while(s>=60)
	{
		s=s-60;
		m++;
	}
	
	while(m>=60)
	{
		m=m-60;
		h++;
	}
	
	printf("\n\t Hours=%d Minutes=%d Seconds=%d",h,m,s);
	
}
