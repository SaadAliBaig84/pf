#include<stdio.h>
#include<math.h>
int main()
{
	float N;
	float x;
	float y;
	float distance;
	long mobile_number;
	int LSD;
	float UAVx;
	float UAVy;
    printf("Enter your mobile number: ");
    scanf("%ld", &mobile_number);
    LSD=mobile_number%10;
    if(LSD<0)
    {
    	LSD=-1*LSD;
	}
	else;
	

	
	//CALCULATING VALUE OF N
	if(0<LSD && LSD<4)
	N=2*(pow(2,LSD));
	else if(LSD==0)
    N=(pow(2,LSD)*4+3);
    else
    N=LSD;

  
    //COORDINATES OF UAV.
	UAVx=1.0;
	UAVy=3.0;
	
	
	for(int i=0; i<N; i++)
	{
	    //ASKING COORDINATES OF LOCATION.
		printf("\nEnter the x-coordinate of location %d: ", i+1);
		scanf("%f", &x);
		
		printf("Enter the y-coordinate of location %d: ", i+1);
		scanf("%f", &y);
		
		distance=sqrt(pow(x-UAVx,2)+pow(y-UAVy,2));
		printf("Distance between location %d and the UAV is: %.2f meters.", i+1, distance);
		
}
        getchar();
}