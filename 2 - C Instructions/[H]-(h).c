/* [H] - (h) */

/* Write a program to receive value of an angle in degrees and check whether sum of squares 
	of sine and cosine of this angle is equal to 1 */

//Headers	
#include<stdio.h>
#include<math.h>

//Macros
#define pi  3.14159265359

int main(){

	//Local declarations
	float fangle, fSum, fr_angle;

	printf("Enter the Angle =");
	scanf("%f",&fangle);
	
	//Converting Degree into Radians
	fr_angle = fangle *(pi/180);
	
	//Calculatiing the sum of sine and cosine
	fSum = (pow(sin(fr_angle),2) + pow(cos(fr_angle),2));
	
	if(fSum==1)
		printf("\nSum of Square of Sin(%.2f) and cos(%.2f) is equal to 1",fangle,fangle);
	else
		printf("\nNot Equal to 1");

	return 0;
}