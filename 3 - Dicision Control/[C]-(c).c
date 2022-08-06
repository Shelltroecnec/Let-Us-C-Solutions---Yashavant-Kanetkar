/* [C] - (c) */

#include<stdio.h>
int main(){
	int iyear=0;
	printf("Enter the Year =");
	scanf("%d",&iyear);
	
	if(iyear % 400==0)
		if(iyear % 100 ==0)
			printf("\nEnter Year %d is a Leap Year",iyear);
		else
			printf("\nEntered Year %d is not a Leap Year",iyear);
	else if(iyear % 4==0)
		printf("\nEntered Year %d is a Leap Year",iyear);
	else
		printf("\nEntered Year %d is not a Leap Year",iyear);
}
