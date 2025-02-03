#include<stdio.h>
                  //Prog => Time to Year via Seconds....
main()
{
	int s,m=0,h=0,d=0,mon=0,y=0;
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
	
	while(h>=24)
	{
		h=h-24;
		d++;
	}
	
	while(d>=30)
	{
		d=d-30;
		mon++;
	}
	
	while(mon>=12)
	{
		mon=mon-12;
		y++;
	}
	
	printf("\n\t  Years=%d  \n\t  Months=%d  \n\t  Days=%d  \n\t  Hours=%d  \n\t  Minutes=%d  \n\t  Seconds=%d",y,mon,d,h,m,s);
	
}
