/* [C] - (l) */

#include<stdio.h>

int main(){
	int ix,iy;
	
	printf("\nEnter the Two Points");
	printf("\nEnter the point x=");
	scanf("%d",&ix);
	printf("\nEnter the point y=");
	scanf("%d",&iy);
	
	if(ix==0 && iy==0)
		printf("\nPoints x=%d and y=%d are Origin of X-Y Axis",ix,iy);
	else if(ix==0 && iy!=0)
		printf("\nPoints x=%d and y=%d, Point Lie on Y-Axis",ix,iy);
	else if(ix!=0 && iy==0)
		printf("\nPoints x=%d and y=%d, Point Lie on X-Axis",ix,iy);
	else if(ix!=0 && iy!=0)
		printf("\nPoints x=%d and y=%d, Point Lie on both X&Y-Axis",ix,iy);
}

