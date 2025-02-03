#include<stdio.h>

main()
{
	int u,tot;
	printf("\n\t Enter Units of Electricity = ");
	scanf("%d",&u);
	
	if(u>300)
	tot=u*5;
	else if(u>=200)
	tot=u*3;
	else if(u>=100)
	tot=u*2;
	else
	tot=u;
	
	printf("\n\t Total Bill = %d ",tot);
}

