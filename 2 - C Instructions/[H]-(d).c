/* [H] - (d) */

/* Consider a currency system in which there are notes of seven denominations, namely, 
	Rs. 1, Rs. 2, Rs.5, Rs. 10, Rs. 50, Rs. 100.
   If a sum of Rs. N is enterd through the keyboard, 
   write a program to compute the smallest number of notes that will combine to give Rs. N */

//Headers
#include<stdio.h>

int main(){

	// Declaring the variables
	int i100, i50, i10, i5, i2, i1, iamount;

	// Taking the Amount as input from the user
	printf("\n Enter the Amount to be Withdrawn =");
	scanf("%d",&iamount);

	// Calculating the Position
	i100 = iamount/100;
	iamount%=100;
	
	i50 = iamount/50;
	iamount%=50;
	
	i10 = iamount/10;
	iamount%=10;
	
	i5 = iamount/5;
	iamount%=5;
	
	i2 = iamount/2;
	iamount%=2;
	
	i1 = iamount/1;
	iamount%=1;
	
	printf("The Entered Amount =%d, and The Cash will be :\n");
	printf("Total Rs100 Notes = %dRs\n",i100);
	printf("Total Rs50 Notes = %dRs\n",i50);
	printf("Total Rs10 Notes = %dRs\n",i10);
	printf("Total Rs5 Notes = %dRs\n",i5);
	printf("Total Rs2 Notes = %dRs\n",i2);
	printf("Total Rs1 Notes = %dRs\n",i1);
	
	return 0;
}