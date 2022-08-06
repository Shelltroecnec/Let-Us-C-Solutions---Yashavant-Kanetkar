/* [C] - (g) */

#include<stdio.h>
#define degree 180
int main(){
	int iside1,iside2,iside3,iTotal=0;
	printf("\nEnter the Value of Side 1=");
	scanf("%d",&iside1);
	printf("\nEnter the Value of Side 2=");
	scanf("%d",&iside2);
	printf("\nEnter the Value of Side 3=");
	scanf("%d",&iside3);
	iTotal = iside1+iside2+iside3;
	if(iTotal==degree)
		printf("\nEntered Side is of a Valid Triangle");
	else
		printf("\nEntered Side is not of a Valid Triangle");
}
