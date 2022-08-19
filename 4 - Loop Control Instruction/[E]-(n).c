/* [E] - (n) */

#include<stdio.h>
int main(){
	int curr_pop=100000, incr_pop=0, i;
	printf("\nTown Today population is 100000, and its has been increased by 10% every Year");
	printf("\nBelow Shows the Population demographics for Last 10 Year From today");
	for(i=1; i<=10; i++)
	{
		incr_pop = curr_pop*10/100;
		curr_pop=curr_pop-incr_pop;
		printf("\nYear population =%d",curr_pop);
	}
}
