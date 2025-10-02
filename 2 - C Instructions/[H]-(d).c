/* [H] - (d) */

#include<stdio.h>
int main(){
	int i100, i50, i10, i5, i2, i1, iamount;
	
	printf("\n Enter the Amount to be Withdrawn =\n");
	scanf("%d",&iamount);
	
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
}
