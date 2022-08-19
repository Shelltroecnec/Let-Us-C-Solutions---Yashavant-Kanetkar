/* [E] - (e) */

#include<stdio.h>
#include<math.h>
int main(){
	float f_profit;
	int i;
	printf("\nInterest of 9Percentage on earning 0f 1000/Year, Gives profit :");
	f_profit =(1000/100)*9;
	printf("%.2f",f_profit);
	for(i=6000;i>=f_profit;i++)
	{
		printf("\n%d",i);
	}
}
