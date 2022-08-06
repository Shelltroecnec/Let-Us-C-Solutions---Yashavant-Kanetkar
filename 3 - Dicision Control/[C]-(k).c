/* [C] - (k) */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define h 0
#define k 0

int main(){
	int ix,iy,iradius=0;
	float fdistance=0;
	
	printf("\nEnter the Two Points =");
	scanf("%d%d",&ix,&iy);
	printf("\nEnter the Radius of Circle =");
	scanf("%d",&iradius);
	
	//To Find Point Lines on the Circle
	iradius=pow(iradius,2);
	printf("\nRadius of Sqaure=%d",iradius);
	if(iradius == (ix-h)*(ix-h)+(iy-k)*(iy-k))
		printf("\nPoints x=%d and y=%d Lies on the Circle",ix,iy);
	
	//To Find given Point Lies inside or outside of circle
	fdistance = sqrt((ix-h)*(ix-h)+(iy-k)*(iy-k));
	if(fdistance < iradius){
		printf("\nPoints x=%d and y=%d Lies inside of the Circle",ix,iy);
		printf("\nDistance From the Center =%.2f",fdistance);
	}
	else{
		printf("\nPoints x=%d and y=%d Lies outside of the Circle",ix,iy);
		printf("\nDistance From the Center =%.2f",fdistance);
	}
}
