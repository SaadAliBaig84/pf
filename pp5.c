#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *arr=NULL;
	arr=(char*)calloc(100,sizeof(char));
	gets(arr);
	
	int count=0;
	
	for(int i=0; *(arr+i)!='\0'; i++)
	{
		if(*(arr+i)==' ')
		count++;
	}
	
	char **arr1=NULL;
	arr1=(char**)calloc((count+1),sizeof(char*));
	
	for(int i=0; i<=count; i++)
	{
		arr1[i]=(char*)calloc(15,sizeof(char));
	}
	
	int i=0,j=0,k=0;
	while(*(arr+i)!='\0')
	{
		if(*(arr+i)==32)
		{
			i++;
			j++;
			k=0;
		}
		else
		{
			*(*(arr1+k)+j) = *(arr+i);
			k++;
			i++;
		}
	}	

   for(int a=0; a<=count; a++)
   {
   	for(int b=0; *(*(arr1+b)+a)!='\0'; b++)
   	printf("%c",(*(*(arr1+b)+a)) );
   }
  
}