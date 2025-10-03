/* [H] - (a) */

/* If a five-digit number is input through the keyboard, write a program to calculate the sum of its
	digit. (Hint: Use the modulus operator '%') */

//Headers	
#include<stdio.h>

int main(){

	//Local declarations
	int inum, n1, n2, n3, n4, n5, itotal;
	
	printf("\nEnter the 5-Digit Number :");
	scanf("%d",&inum);
	
	//Solving without using Loops
	n1 = inum % 10;
	n2 = (inum / 10)%10;
	n3 = (inum / 100)%10;
	n4 = (inum / 1000)%10;
	n5 = (inum / 10000)%10;
	printf("%d,%d,%d,%d,%d",n1,n2,n3,n4,n5);
	itotal = n1+n2+n3+n4+n5;
	printf("\nTotal of %d Number = %d",inum,itotal);

	return 0;
}