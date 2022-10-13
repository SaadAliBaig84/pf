#include<stdio.h>
#include<math.h>
int main()
{
	int choice;
	
	int digits;
	int digit1;
	int digit2;
	int digit3;
	int digit4;
	int a=0;
	int i=0;
	char character;
	float check;
	int length=0;
	int position=1;

	
	int output=0;
	printf("Please select an option:\n1.Encryption.\n2.Decryption.");
	do
	{
	scanf("%d", &choice);
	if(choice!=1 && choice!=2)
	printf("Select appropriate choice.");
    }
    while(choice!=1 && choice!=2);
	switch(choice)
	{
	case 1:	
           do{
		   	
			printf("Enter the 4 digits: ");
			scanf("%d", &digits);
			check=digits/1000;
			if(check<1 || check>=10)
			printf("You have to enter 4 digits.\n");
			
		  }while(check<1 || check>=10);
			for(int i=0; i<4;i++)
			{
						fflush(stdin);
				 if(a==0)
				 {
				 	digit1=(digits%10)+65;
				 }
				 else if(a==1)
				 {
				 	digit2=((digits/10)%10)+65;
				 }
				 else if(a==2)
				 {
				 	digit3=((digits/100)%10)+65;
				 }
				 else if(a==3)
				 {
				 	digit4=(digits/1000)+65;
				 }
			a++;
		   }
		   printf("%c%c%c%c", digit1,digit2,digit3,digit4);
		
	break;
			
		case 2:
			
	
			
		while(length<4)
		{
			fflush(stdin);
			i++;
		  printf("Please enter the character%d", i);
		  scanf("%c", &character);
		  output+=((character-65)*position);
		  position*=10;
		  length++;
		
		}
		
			printf("%d", output);
			
	}
}