/* [H] - (b) */
/* If a five-digit number is input through the keyboard. Write a program to 
   reverse the number */

#include<stdio.h>
int main(){
	int inum, irev=0, n1, n2, n3, n4, n5;
	
	printf("\nEnter the Number :");
	scanf("%d",&inum);
	
	//Solving without using Loops
	n1 = inum % 10;
	n2 = (inum / 10)%10;
	n3 = (inum / 100)%10;
	n4 = (inum / 1000)%10;
	n5 = (inum / 10000)%10;
	irev = n1*10000 + n2*1000 + n3*100 + n4*10 + n5 //Going to that Position by mutliplying with its position Value.
	printf("\nEntered Number %d, Reversed Number %d",inum,irev);
	reuturn 0;
}
