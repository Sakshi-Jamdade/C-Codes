#include<stdio.h>

main()
{
	int a;
	printf("\n\t Enter Year =");
	scanf("%d",&a);
//	if(((a%4==0)&&(a%100!=0))||(a%400==0))
    if(((a%4==0)&&(a%100!=0))||(a%400==0))
	{
		printf("\n\tThis is leap Year");
	}
	else
	{
	    printf("\n\tThis is not leap Year");	
	}
}
