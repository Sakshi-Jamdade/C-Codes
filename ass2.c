#include<stdio.h>
main()
{
    float a,b,c;
    
    printf("\n\t\t Enter the Amount = ");
    scanf("%f",&a);
    
    printf("\n\t\t Enter the discount = ");
    scanf("%f",&b);
    c=a-(a*b/100);
    printf("\n\t\t Final Bill = %.2f",c);
}



