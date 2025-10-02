/* [C] - (g) */

/* If the total selling price of 15 items and the total profit earned on them is input 
	through the keyboard. Write a program to find the cost price of one item */

//Headers	
#include<stdio.h>

int main(){

	//Local declarations
	float cp, sp, profit;

	printf("\nEnter the Selling Price for 15 Products :");
	scanf("%f",&sp);
	printf("\nEnter the Profit :");
	scanf("%f",&profit);
	cp = sp - profit;
	printf("\nCost price = %.2f",cp);

	return 0;
}
