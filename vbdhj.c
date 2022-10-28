#include<stdio.h>
int main()
{
	int i,j;
	int sumr=0;
	int sumc=0;
	int sumR=0;
	int sumC=0;
	int arr[5][6]={{1,2,3,4,5},{2,4,6,8,10}, {20,10,5,3,1}, {3,6,9,12,15}};
	for( i=0; i<4; i++)
	{
		sumr=0;
		for( j=0; j<5; j++)
		{
			sumr+=arr[i][j];
			
		}
		arr[i][5]=sumr;
		printf("row %d sum: %d\n", i, arr[i][5]);
		
		
	}
	for( j=0; j<5; j++)
	{
		sumc=0;
		for( i=0; i<4; i++)
		{
			sumc+=arr[i][j];
			
		}
		arr[4][j]=sumc;
		printf("column %d sum: %d\n",j, arr[4][j] );
	}

    for(i=0; i<4; i++)
    {
    	sumC+=arr[i][5];
	}
	printf("%d\n", sumC);
	for(j=0; j<5; j++)
    {
    	sumR+=arr[4][j];
	}
	printf("%d\n", sumR);
	
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}
