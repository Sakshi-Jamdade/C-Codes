#include<stdio.h>

main()
{
	float a,b,c,d,e;
	printf("\n\t Enter the marks of 3 Subjects = ");
	scanf("%f%f%f",&a,&b,&c);
	d=a+b+c;
	printf("\n\n\t Total Marks = %.2f",d);
	printf("\n\t Avarage of Marks = %.2f",d/3);
}
