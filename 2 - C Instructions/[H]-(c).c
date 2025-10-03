/* [H] - (c) */

/* If a four-digit number is input through the keyboard, write a program to obtain first and last digit of this number */

//Headers
#include<stdio.h>

int main(){
	
	//Local declarations
	int inum, irev=0, n1, n2, n3, n4;
	
	printf("\nEnter the Four-digit Number :");
	scanf("%d",&inum);
	
	//Solving without using Loops
	n1 = inum % 10;
	n2 = (inum / 10)%10;
	n3 = (inum / 100)%10;
	n4 = (inum / 1000)%10;
	
	//Adding the First and Last Digits
	printf("\nFirst Digit=%d, Last Digit=%d\nSum = %d",n4,n1,n4+n1);
	
	return 0;
}