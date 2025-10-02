/* [C] - (f) */

/* Two numbers are input through the keyboard into two locations C and D. Write a program 
	to interchange the contents of C and D */

//Headers	
#include<stdio.h>

int main(){

	//Local declarations
	int C, D, temp;
	
	printf("\nEnter the number for C :");
	scanf("%d",&C);
	printf("\nEnter the number for D :");
	scanf("%d",&D);
	temp = C;
	C = D;
	D = temp;
	printf("\n C=%d and D= %d",C,D);

	return 0;
}
