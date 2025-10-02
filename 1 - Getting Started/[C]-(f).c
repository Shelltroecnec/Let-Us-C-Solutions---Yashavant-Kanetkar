/* [C] - (f) */

#include<stdio.h>
int main(){
	int C, D, temp;
	
	printf("\nEnter the number for C :");
	scanf("%d",&C);
	printf("\nEnter the number for D :");
	scanf("%d",&D);
	temp = C;
	C = D;
	D = temp;
	printf("\n C=%d and D= %d",C,D);
}
