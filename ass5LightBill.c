#include<stdio.h>

main()
{
	int u,amt;
	printf("\n\t Enter Units of Electricity = ");	
	scanf("%d",&u);
	
	if(u>1 && u<=100)
	{
	amt=u;
	printf("\n\t Total Bill = %d",amt);
    }
   	else if(u>100 && u<=200)
	{
	amt=u*2;
	printf("\n\t Total Bill = %d",amt);
    }
   	else if(u>200 && u<=300)
	{
	amt=u*3;
	printf("\n\t Total Bill = %d",amt);
    }
    else
	{
	amt=u*5;
	printf("\n\t Total Bill = %d/-Rs",amt);
    }
}
