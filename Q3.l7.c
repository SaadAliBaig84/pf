#include<stdio.h>
int main()
{
	int n;

	printf("Enter n: ");
	scanf("%d", &n);
	int arr[n];
	int candies[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter %d student rating:  ", i+1);
		scanf("%d", &arr[i] );
	}
	for(int a=0; a<n; a++)
 {
 	if(arr[a]>arr[a+1])
 	candies[a]=1+1;
 	else
 	candies[a]=1;
 	
 }
 for(int b=0; b<n;b++)
 {
 	printf("%d\n", candies[b]);
 }
	
}