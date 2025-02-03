#include<stdio.h>
main()

{
	
	int i, n, j,c,r, a[50][50];
	printf("\n\t Enter rows And Columens= :");
	scanf("%d%d",&r,&c);
	printf("\n\tEnter %d elements=",r*c );
		for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	{
		
	printf("\n\n\t");
	for(j=0;j<c;j++)
	printf("%3d",a[i][j]);
}
	
	printf("\n\t Upper Left Trangle=");
		for(i=0;i<r;i++)
	{
		 
	printf("\n\n\t");
	for(j=0;j<c-i;j++)
	printf("%3d",a[i][j]);
}

	printf("\n\t Upper right Trangle=");
	for(i=1;i<r;i++)

		for(i=0;i<c;i++)
	{
		
	printf("\n\n\t");
		{
		
	printf("\n\n\t");
	for(j=0;j<=i-1;j++)
	printf(" ");
}	
	for(j=i;j<c;j++)
	printf("%3d",a[i][j]);
}
	
	printf("\n\t Lower Left Trangle=");
		for(i=0;i<r;i++)
	{
		 
	printf("\n\n\t");
	for(j=0;j<=i;j++)
	printf("%3d",a[i][j]);
}
	printf("\n\t Lower Right Trangle=");
		for(i=0;i<r;i++)
	{
		 
	printf("\n\n\t");
	for(j=c;j>c-i;j--)
	printf("%3d",a[i][j]);
}
}

