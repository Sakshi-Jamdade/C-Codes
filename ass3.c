#include<stdio.h>

main()
{
	float a,b,c,d,e,tot,per,res;
	
	printf("\n\t Enter Marks of 5 Subjects = ");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	tot=a+b+c+d+e;
	per=tot/5;
	printf("\n\t Total Marks = %.2f",tot);
	printf("\n\n\t Percentage = %.2f",per);
	
	//res=per<40;
	
	if(per>=40)
	{
		//printf("\n\n\t Result = %f",per);
		//printf("\n\n\t %d Pass ",per);
		printf("\n\n\t Result is Pass");
	}
	else
	{
		printf("\n\n\t Result is fail");
	}
	
}
