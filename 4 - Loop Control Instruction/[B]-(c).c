/* [B] - (c) */

#include<stdio.h>
int main(){
	int inum, ipo, ians=1, i;
	
	printf("\nEnter the Base Number :");
	scanf("%d",&inum);
	printf("\nEnter the Power of Base number to be Raised :");
	scanf("%d",&ipo);
	for(i=1;i<=ipo;i++)
	{
		ians = ians *inum;
	}
	
	printf("\nAns : %d^%d = %d",inum,ipo,ians);
}
