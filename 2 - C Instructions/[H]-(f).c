/* [H] - (f) */

/* If lengths of three sides of a triangle are input through the keyboard, write a program 
	to find the area of a triangle */

//Headers	
#include<stdio.h>

int main(){

	//Local declarations
	int s1, s2, s3, iSide;
	float iArea=0;

	printf("Enter the 3 Sides of a Triangle =");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	//Find the Area by using 3 Side formula by Hearon
	iSide=(s1+s2+s3)/2; // Adding All the Sides
	iArea = sqrt(iSide*(iSide-s1)*(iSide-s2)*(iSide-s3)); //Formula
	
	printf("\nArea of the Entered Triangle = %0.2f",iArea);

	return 0;
}