#include<stdio.h>
main()
{
	int i,w,ch,rem=0,tot=0;
	
	while(1)
	{
		printf("\n\n\t ***Welcome to National Bank***");
		printf("\n\t 1. Insert Money");
		printf("\n\t 2. Withdrawl Money");
		printf("\n\t 3. Exit");
		
		printf("\n\t 1. Enter Your Choise :");
		scanf("%d",&ch);
		
		if(ch==3)
		{
		printf("\n Enter Any key to exit.......");
			break;
		}
		switch(ch)
		{
			case 1:
				{
				printf("\n\t 1. Enter total Amount to Insert :");
				scanf("%d",&i);
				tot=tot+i;
				printf("\n\t Remaining Balance is  :%d",tot);
				break;
				}
			
			case 2:
				{
				if(tot>=500)
				{
				rem=tot;
					printf("\n\t 1. Enter total Amount to withdraw ");
					scanf("%d",&w);
					tot=tot-w;
				}
					if(tot>=500)
					{
						
						printf("\n\t Remaining Balance is  :%d",tot);
						break;
					}
			
					else
						{
					     tot=rem;
						printf("\n\t ***LOW BALANCE***=%d",tot);			
						break;	
						}
					}
					
					default :
							printf("\n\t This is not valid Choise");			
               
					
		}	
	}
	
}
