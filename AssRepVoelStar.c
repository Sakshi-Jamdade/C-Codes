#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	int i;
	printf("\n\t Enter the String =");
	gets(a);
	for(i=0;a[i];i++)
	{

	if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O'  || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
	a[i]='*';
	}
		printf("\n\t Replased String is =%s",a);

}

