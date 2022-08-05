/* [C] - (d) */

#include<stdio.h>
int main(){
	float farhenheit, fcelsius;
	
	printf("\n\t***Farhenheit - Celsius Convertor***\n");
	printf("\nEneter Temperature in Farhenheit : ");
	scanf("%f",&farhenheit);
	fcelsius = ((farhenheit-32)*5)/9;
	printf("\nTemperature in Celsius : %.2f^C",fcelsius);
}
