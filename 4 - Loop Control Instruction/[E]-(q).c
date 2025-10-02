/* [E] - (q) */

#include<stdio.h>
#include<math.h>
int main(){
	int principal,n;
	float emi, rate, total, int_paid;
	printf("\n\t**EMI Calculator**\n");
	printf("\nEnter the Principal Amount :");
	scanf("%d",&principal);
	printf("\nEnter the Rate of Interest :");
	scanf("%f",&rate);
	printf("\nEnter the Number of Months :");
	scanf("%d",&n);
	rate = rate/12/100;
	emi = principal*rate*(pow(1+rate,n))/(pow(1+rate,n)-1);
	printf("\nMonthly EMI : %f for %d Months",emi,n);
	total=emi*n;
	printf("\nTotal Payment till %d Tenure : %f",n,total);
	int_paid = total-principal;
	printf("\nTotal Intrest Paid :%f",int_paid);
}
