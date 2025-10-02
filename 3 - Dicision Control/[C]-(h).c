/* [C] - (h) */

#include<stdio.h>
int main(){
	int inum;
	
	printf("\nEnter the Number, to find its Absolute Value =");
	scanf("%d",&inum);
	if(inum > 0)
		printf("\nEntered Number, Absolute Value = %d",inum);
	else if(inum < 0)
		printf("\nEntered Number, Absolute Value = %d",-1*inum);
	
}
