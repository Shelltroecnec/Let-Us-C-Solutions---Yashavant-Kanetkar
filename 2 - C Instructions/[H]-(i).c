/* [H] - (i) */

/* Write a program to receive values of latitude and logitude, in degrees, of two places on the earth 
	and outputs the distance between them in nautical miles. The formula for distance in 
	nautical miles is: D = 3963 cos^-1 (sin L1 sin L2 + cos L1 cos L2 * cis (G2 - G1 )) */

//Headers	
#include<stdio.h>
#include<math.h>

//Macros
#define pi 3.14159265359

int main(){

	//Local declarations
	float lat1,lat2,lon1,lon2,fr_angle;
	float fDistance=0;

	printf("Enter the Latitude\n");
	printf("lat1 and lat2=");
	scanf("%f%f",&lat1,&lat2);
	printf("\nEnter the Longitude\n");
	printf("Enter the lon1 and lon2=");
	scanf("%f%f",&lon1,&lon2);
	
	//Converting Degree into Radians
	lat1 = lat1 * (pi/180);
	lat2 = lat2 * (pi/180);
	lon1 = lon1 * (pi/180);
	lon2 = lon2 * (pi/180);
	
	//Calculating the Distance
	fDistance = 3963 * acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1));
	printf("\nDistance in Nautical Miles = %f",fDistance);

	return 0;
}
