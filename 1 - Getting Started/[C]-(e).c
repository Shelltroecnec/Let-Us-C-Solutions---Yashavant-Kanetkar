/* [C] - (e) */

/* The length & breadth of a rectangle and radius of a circle are input through the keyboard.
	Write a program to calculate area & perimeter of a rectangle and area & circumference of a circle */

//Headers	
#include<stdio.h>
//Macros
#define pi 3.14

int main(){

	//Local declarations
	float length, breadth, radius, Area_r, Area_c, perimeter, circum;
	
	printf("\nEnter the Lenght of a Rectangle :");
	scanf("%f",&length);
	printf("\nEnter the Breadth of a Rectangle :");
	scanf("%f",&breadth);
	printf("\nEnter the Radius of Circle :");
	scanf("%f",&radius);
	//Area of a Rectangle 
	Area_r = length*breadth;
	//Perimter of a Rectang;e
	perimeter = 2*(length+breadth);
	//Circumference of a Circle
	circum = 2*pi*radius;
	//Area of a Circle
	Area_c = 2*pi*radius*radius;
	printf("\nArea of an entered Rectangle = %.2f\nPerimeter of an entered Rectangle = %.2f\n",Area_r,perimeter);
	printf("\nArea of an entered Circle = %.2f\nCircumference of an enterd Circle = %.2f\n",Area_c,circum);

	return 0;
}
