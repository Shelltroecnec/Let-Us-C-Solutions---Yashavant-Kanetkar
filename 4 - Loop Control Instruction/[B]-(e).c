/* [B] - (e) */

#include<stdio.h>
#include<math.h>
int main(){
	int itemp=0,inum=0,iremain=0,ir=0,iTotal=0,i;
	
	printf("\n\tAmrstrong Number");
	printf("\nEnter the Number :");
	scanf("%d",&inum);
	itemp=inum;
	while(inum != 0)
	{
		iremain = inum % 10;
		ir = pow(iremain,3);
		iTotal += ir;
		inum/=10;
	}
	if(iTotal == itemp)
		printf("\nEntered Number %d is a Armstrong Number",iTotal);
	else
		printf("\nEntered Number %d is not a Armstrong Number",itemp);
}
