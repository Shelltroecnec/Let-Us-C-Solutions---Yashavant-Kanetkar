/* [G] - (i) */

#include<stdio.h>
int main(){
	int iWeight=0;
	
	printf("\nEnter Your Weight in Pounds :");
	scanf("%d",&iWeight);
	if(iWeight < 115)
		printf("\nYour Weight =%d\nYour Weight Class = Flyweight !",iWeight);
	else if(iWeight >= 115 && iWeight <=121)
		printf("\nYour Weight =%d\nYour Weight Class = Bantamweight !",iWeight);
	else if(iWeight >= 122 && iWeight <= 153)
		printf("\nYour Weight =%d\nYour Weight Class = Featherweight !",iWeight);
	else if(iWeight >= 154 && iWeight <= 189)
		printf("\nYour Weight =%d\nYour Weight Class = MiddleWeight !",iWeight);
	else if(iWeight >= 190)
		printf("\nYour Weight =%d\nYour Weight Class = Heavyweight !",iWeight);
}
