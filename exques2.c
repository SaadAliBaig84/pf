#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=0;
	int next_value=0;
	int sum=0;
	
	
	while(num<=0)
	{
		printf("Initial value ");
		scanf("%d", &num);
		if(num<=0)
		{
		printf("Error\n");
		exit(0);
	}
	
next_value=num;

for(int i=0; next_value!=1; i++)
{

		if((next_value%2)==0)
		{
		next_value=next_value/2;
	
	    }
	        	
	    else
	    {
		next_value=(3*next_value+1);
        }
        
        printf("Next value is %d\n", next_value);
        sum+=1;
}
	printf("Number of operations performed: %d", sum);
			
	
		
		

}
	
}