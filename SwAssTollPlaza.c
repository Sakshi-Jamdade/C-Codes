#include<stdio.h>
main()
{
	int l=0,o=0,ch,v;
	int bike=0,car=0,bus=0,truck=0;
	int bksum=0,csum=0,bsum=0,tsum=0;
	
	while(1)
	{
		printf("\n\n\t ***Welcome to TOLL PLAZA***");
		printf("\n\n\t 1. Local Vehical");
		printf("\n\t 2. Outside Vehical");
		printf("\n\t 3. Exit");
	
	
		printf("\n\t 1. Enter Your Choise :");
		scanf("%d",&ch);
	
		if(ch==3)
		{
		printf("\n\t ***Total Collection***");
		printf("\n\n\t Total Amount =%d",bksum+csum+bsum+tsum);


		printf("\n\n\t ***Total Vehicals***");
		printf("\n\t Total Traffic =%d",o+l);
		
		printf("\n\n\t Total Local Vehicals =%d",l);
		
		printf("\n\n\t Total Outside Vehicals =%d",o);
		
		printf("\n\t Total Bikes =%d",bike);
	    printf("\n\t Total Cars =%d",car);
	    printf("\n\t Total Buses =%d",bus);
	    printf("\n\t Total Trucks =%d",truck);
		break;
		}
		
		switch(ch)
		{
			case 1:
				{
				printf("\n\t Local Vehical........No Charges......");
				l=l+1;
				break;
				}
				
				
			case 2:
				{
				printf("\n\t ***Ourside Vehical***");
				o=o+1;
					
				printf("\n\n\t ***Select Vehical***");
				printf("\n\n\t 1. Bike ...10.00 Rs/-");
				printf("\n\t 2. Car ...20.00 Rs/-");
				printf("\n\t 3. Bus ...25.00 Rs/-");
				printf("\n\t 4. Truck ...35.00 Rs/-");
				printf("\n\t 5. Exit");
				
				printf("\n\t 1. Enter Your Choise :");
	        	scanf("%d",&v);
				
					switch(v)
					{
						case 1:
							{
							printf("\n\t Vehical Type :- Bike ");
							bike=bike+1;	
							printf("\n\t Please Pay 10 Rs/- ");
							bksum=bksum+10;
							break;	
							}
							
							case 2:
							{
							printf("\n\t Vehical Type :- Car ");
							car=car+1;	
							printf("\n\t Please Pay 20 Rs/-");
							csum=csum+20;
							break;	
							}
							
							case 3:
							{
							printf("\n\t Vehical Type :- Bus ");
							bus=bus+1;	
							printf("\n\t Please Pay 25 Rs/-");
							bsum=bsum+25;
							break;	
							}
							
							case 4:
							{
							printf("\n\t Vehical Type :- Truck ");	
							truck=truck+1;
							printf("\n\t Please Pay 35 Rs/-");
							tsum=tsum+35;
							break;	
							}
							default :
								printf("\n\t This is not valid Choise");
					}

				}	
		}
   }
}
