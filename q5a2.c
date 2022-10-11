#include<stdio.h>
int main()
{
	int number_of_ice_creams;
	int shift1=8;
	int shift2=16;
	printf("Enter the number of ice creams that you want to order. ");
	scanf("%d", &number_of_ice_creams);
	int choice_of_hours;
	
    do
	{
	printf("Please select from the following two options based on how many hours you want the plant to run:\nPress 1 for: %d hours.\nPress 2 for: %d hours.\n ", shift1, shift2);
	scanf("%d", &choice_of_hours);
	if (choice_of_hours!=1 && choice_of_hours!=2)
	printf("Select an appropriate choice i.e 1 or 2: ");
	else;
    } 
    while(choice_of_hours!=1 && choice_of_hours!=2);
	int cost=60;
	int number_of_days;
	int number_of_hours;
	int price;
	switch(choice_of_hours)
	{
		case 1:
			number_of_hours=number_of_ice_creams/50;
			if(number_of_hours>=shift1)
			{	
			number_of_days=number_of_hours/shift1;
			number_of_hours=number_of_hours%shift1;
			if(number_of_days>1)
			{
				price=(number_of_days*8*50*cost)+(number_of_hours*50*cost);
			}
		    }
			else if(number_of_hours<=shift1)
			{
				price=number_of_hours*50*cost;
			}
			
		    
		
		printf("*****Bill*****: \nNumber of days: %d.\nNumber of hours: %d\nPlant-running time per day: %d hours.\nCost per ice cream: Rs.%d.\nTotal cost: Rs.%d", number_of_days, number_of_hours, shift1, cost, price );	
		break;
		case 2:
				number_of_hours=number_of_ice_creams/50;
	if(number_of_hours>shift2)
			{	
			number_of_days=number_of_hours/16;
			number_of_hours=number_of_hours%16;
			if(number_of_days>1 && number_of_hours>8)
			{
				price=((2*cost*((number_of_hours)-8)*50)*number_of_days)+(8*cost*50*number_of_days)+((2*cost*(number_of_hours-shift1)*50)+(8*50*shift1));
			}
			else if(number_of_days>1 && number_of_hours<=8);
			{
				price=((2*cost*(shift2-8)*50)*number_of_days)+(shift1*cost*50*number_of_days)+(number_of_hours*cost*50);
			}
	        }
	else if(number_of_hours<=shift2)//less than or equal to a day.
	        {
	        	if(number_of_hours>8)
	        	{
	        		price=((2*cost*(number_of_hours-shift1)*50)+(8*50*shift1));
				}
	        	else if(number_of_hours<=8)
	        	{
	        		price=number_of_hours*50*cost;
				}
			}
	
		printf("*****Bill***** \nNumber of days: %d.\nNumber of hours: %d\nPlant-running time per day: %d hours.\nCost per ice cream: Rs,%d.\nTotal cost: Rs.%d ", number_of_days, number_of_hours, shift2, cost, price);	
		break;
	}
	
	 
}