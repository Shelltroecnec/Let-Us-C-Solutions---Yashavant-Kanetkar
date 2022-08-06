/* [H] - (e) */

#include<stdio.h>
int main(){
	int inum, itotal=0, n1, n2, n3, n4, n5;
	
	printf("\nEnter the Number :");
	scanf("%d",&inum);
	
	//Solving without using Loops
	n1 = inum % 10+1;
	n2 = (inum / 10)%10+1;
	n3 = (inum / 100)%10+1;
	n4 = (inum / 1000)%10+1;
	n5 = (inum / 10000)%10+1;
	//Going to the exact Posotion of number
	itotal = n5*10000 + n4*1000 + n3*100 + n2*10 + n1;
	printf("\nEntered Number= %d , New Number after adding 1 = %d",inum,itotal);
}
