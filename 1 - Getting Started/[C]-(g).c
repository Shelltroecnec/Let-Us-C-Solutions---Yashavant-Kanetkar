/* [C] - (g) */

#include<stdio.h>
int main(){
	float cp, sp, profit;
	printf("\nEnter the Selling Price for 15 Products :");
	scanf("%f",&sp);
	printf("\nEnter the Profit :");
	scanf("%f",&profit);
	cp = sp - profit;
	printf("\nCost price = %.2f",cp);
}
