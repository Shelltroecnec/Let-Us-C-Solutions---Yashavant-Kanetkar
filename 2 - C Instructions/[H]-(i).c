/* [H] - (i) */

#include<stdio.h>
#include<math.h>
#define pi 3.14159265359
int main(){
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
}
