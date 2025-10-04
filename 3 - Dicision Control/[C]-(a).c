/* [C] - (a) */


//Headers
#include<stdio.h>

int main(){

	//Local declarations
	int icp, isp, iprofit=0,iloss=0;

	printf("Enter the Cost Price of the Product =");
	scanf("%d",&icp);
	printf("\nEnter the Selling Price of the Product =");
	scanf("%d",&isp);
	
	if(isp > icp){
		iprofit = isp - icp;
		printf("\nProfit Earned = %dRs",iprofit);
	}
	else{
		iloss = icp - isp;
		printf("\nYour Cost Price = %d\nSelling Price = %d",icp,isp);
		printf("\nYou earned no Profit, Your Loss = %dRs",iloss);
	}

	return 0;
}
