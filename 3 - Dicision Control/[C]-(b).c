/* [C] - (b) */

#include<stdio.h>
int main(){
	int inum;
	printf("Enter any Integer Number =");
	scanf("%d",&inum);
	if(inum % 2 ==0){
		printf("\nEntered Number %d is an Even Number",inum);
	}
	else if(inum % 2 !=0)
		printf("\nEntered Number %d is an Odd Number",inum);
}
