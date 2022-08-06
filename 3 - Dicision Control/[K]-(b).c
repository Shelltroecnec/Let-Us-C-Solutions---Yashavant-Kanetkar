/* [K] - (b) */

#include<stdio.h>
int main(){
	int iyear;
	printf("\nEnter the Year :");
	scanf("%d",&iyear);
	iyear%100==0?printf("\nEntered Year %d is a Leap Year",iyear):iyear%4==0?printf("\nEntered Year %d is a Leap Year",iyear):printf("\nEntered Year %d is Not a Leap Year",iyear);
}
