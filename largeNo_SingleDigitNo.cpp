//large to single digit 
//NW
#include<stdio.h>
int main()
{
	long long int number;
	int sum;
	printf("Enter large Number : ");
	scanf("%lld",&number);
	
/*	while(number > 0 || sum > 9)
	{
		if(number == 0){
			number = sum;
			sum = 0;
		}
		sum += number % 10;
		number /= 10;
		
	}
	printf("Single digit No :",sum);
	return 0;
	
*/
	while(number >= 10){
		sum = 0;
		while(number > 0){
			sum += number % 10;
			number /= 10;
		}
		number = sum;
	}
	printf("Reduced Single digit No :",(int)number);

	return 0;
}
