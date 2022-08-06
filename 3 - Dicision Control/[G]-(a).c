/* [G] - (a) */

#include<stdio.h>
int main(){
	int iyear;
	
	printf("\nEnter the Year =");
	scanf("%d",&iyear);
	
	if(iyear % 100==0 && iyear%4==0){
		printf("\nEntered Year %d is a Leap Year",iyear);
	}
	else
		printf("\nEntered Year %d is not a Leap Year",iyear);
}
