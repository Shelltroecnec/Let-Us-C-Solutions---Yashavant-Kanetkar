/* [H] - (h) */

#include<stdio.h>
#include<math.h>
#define pi  3.14159265359

int main(){
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
}
