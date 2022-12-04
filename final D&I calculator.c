#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char string[100];
	char variable;
	char powersign='^';
	int choice;
	printf("***SAB CALCULATOR***\n\nSelect one of the following modes of calculation:\n1.Differentiation.\n2.Integration.");
		
	do{
		scanf("%d", &choice);
		fflush(stdin);
		if(choice!=1 && choice!=2)
		{
		printf("\nSelect from one of the given option only i.e 1 or 2: \n");
		}
	}while(choice!=1 && choice!=2);
	
	
	if(choice==1)
    printf("Enter a variable with respect to which you want to differentiate: ");
    else if(choice==2)
	printf("Enter a variable with respect to which you wish to integrate: ");
    scanf("%c",&variable);
    fflush(stdin);
	
	
	printf("Enter the polynomial(Format: ax^b+cx^d+e):\n");
    gets(string);
		
	char string2[10][100]={'\0'};
	int i=0,j=0,k=0;
	char sign[10];
	while(string[j]!='\0')
	{
		if((string[j]=='+'&&string[j-1]!='^')||(string[j]=='-'&&string[j-1]!='^'))
		{
		
			i++;
			if(j==0 && string[j]=='-')
			i--;
			k=0;
			string2[i][k]=string[j];
			k++;
			j++;
		}
		else
		{
			string2[i][k]=string[j];
			j++;
			k++;
		}
	}
//	for(int a=0; a<=i; a++)
	//{
	//	puts(string2[a]);
	//}
		int value1;
		char value2[10]={'\0'};
		int value3;
		int counter=0,xcheck=0, check=0, check2=0;\
		
	switch(choice)
	{
		case 1:
		printf("Derivative: ");
	
		
		for(int a=0 ; a<=i; a++)
		{
			for(int b=0 ; b<strlen(string2[a]); b++)
			{
				if(string2[a][b]==variable)
				xcheck++;
			}
			value1=atoi(string2[a]);
			if(value1==0)
			{
				if(string2[a][0]=='-')
				value1=-1;
				else
				value1=1;			
			
			}
			for(int b=0; b<strlen(string2[a]);b++)
			{
				if(string2[a][b]=='^')
				{
					counter=1;
					for(int c=b+1,d=0; c<strlen(string2[a]); c++,d++)
					{
						value2[d]=string2[a][c];
					}
				}
				else if(string2[a][b]==variable && string2[a][b-2]!='l' && string2[a][b-1]!='n' )
				check=1;
				else if(string2[a][b]==variable && string2[a][b-2]=='l' && string2[a][b-1]=='n')
				check2=1;
				
				
			}
			value3=(atoi(value2)-1);
			if((string2[a][0]=='+'||(string2[a][0]>=48 && string2[a][0]<=57)) && a!=0 && xcheck!=0)
			printf("+");
			if(check==1)
			{
				if(counter==1)
				{
					if((value3>1 && atoi(value2)!=0)||(value3<0 && atoi(value2)!=0))
					printf("%d%c%c%d",value1*(atoi(value2)),variable,powersign,value3);
					else if(value3==1)
					printf("%d%c",(value1*(atoi(value2))),variable);
				}
				else if(counter==0)
				printf("%d",value1);
			}
			else if(check2==1)
			{
				printf("%d%c",value1,variable,"^-1");
			}
			else
			{
			if(i==0)
			printf("0");
			}
			value1=0;
			for(int y=0; y<10; y++ )
			{
				value2[y]='\0';
			}
			value3=0;
			counter=0;
			check=0;
			xcheck=0;
		}
		break;

		case 2:
			printf("Integrated function: ");
			for(int a=0 ; a<=i; a++)
			{
				for(int b=0 ; b<strlen(string2[a]); b++)
			{
				if(string2[a][b]==variable)
				xcheck++;
			}
				value1=atoi(string2[a]);
				if(value1==0)
				{
					if(string2[a][0]=='-')
					value1=-1;
					else
					value1=1;
				}
				
				for(int b=0; b<strlen(string2[a]);b++)
				{
					if(string2[a][b]==variable && string2[a][b+1]=='^')
					{
						
						for(int c=b+2,d=0; c<strlen(string2[a]); c++,d++)
						{
							value2[d]=string2[a][c];
						}
						break;
					}
					else if(string2[a][b]==variable && string2[a][b+1]!='^')
					{
						value2[0]='1';
					}
					else if(xcheck==0)
					{
						value2[0]='0';
					}
					
					
					
					
				}
				value3=(atoi(value2)+1);
			    		if(string2[a][0]=='+'||(string2[a][0]>=48 && string2[a][0]<=57) && a!=0 )
			    		{
			    			printf("+");
						}//this is to place a +ve sign when printing each differentiated term as atoi makes for e.g +4x to 4 and not +4
						
						if(atoi(value2)!=-1)
						{
							if(((float)value1)/((float)value3)==1.0)
							printf("%c%c%d",variable,powersign,value3);
						    else
							printf("%.1f%c%c%d",((float)value1)/((float)value3),variable,powersign,value3);
						}
						else
						{
							if(value1==1)
							printf("ln%c",variable);
							else
							printf("%dln%c", value1,variable);
						}	
						value1=0;
						for(int y=0; y<10; y++ )
						{
							value2[y]='\0';
						}
						value3=0;	
			}
		break;
	}
}
