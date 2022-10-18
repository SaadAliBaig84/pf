#include<stdio.h>
int main()
{
	for(int i=1; i<=4; i++)
	{
		for(int a=1; a<=4-i; a++)
		{
		printf(" ");
	}
	for(int b=1; b<=((2*i)-1); b++)
	{
		printf("*");
	}
		printf("\n");
	}
   
   
   for(int i=1; i<=3; i++)
   {
   	for(int d=3; d>=4-i; d--)
   	{
   		printf(" ");
	   }
	   for(int e=5; e>=((2*i)-1); e--)
	   {
	   	printf("*");
	   }
	   printf("\n");
   }
}