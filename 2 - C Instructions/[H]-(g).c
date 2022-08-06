/* [H] - (g) */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define pi  3.14159265359
int main(){
	int iX, iY;
	float fR;
	double fTheta;
	printf("Enter the Value of x & y of Co-ordinates\n");
	printf("Enter the x=");
	scanf("%d",&iX);
	printf("\nEnter the y=");
	scanf("%d",&iY);
	
	//Formula to find r
	fR = sqrt(pow(iX,2)+pow(iY,2));
	printf("\nr=%.2f",fR);
	
	//Calulation to find theta
	fTheta = atan2(iY,iX);
	fTheta = fTheta * 180/pi;
	printf("\nTheta=%.2f",fTheta); 
}
