/* [G] - (d) */

#include<stdio.h>
#include<conio.h>
int main(){
	int idays;
	float ffine=0;
	
	printf("\nEnter the Numner of Days, you are Late =");
	scanf("%d",&idays);
	if(idays>=1 &&idays<=5)
	{
		ffine = 0.5*idays;
		printf("\nYou are Late by %d Days",idays);
		printf("\nFine = %.2fRs",ffine);
	}
	else if(idays>=6 && idays<=10)
	{
	ffine = 1*idays;
	printf("\nYou are Late by %d Days",idays);
	printf("\nFine = %.2fRs",ffine);
	}
	else if(idays>=10 && idays<=30)
	{
		ffine = 5*idays;
		printf("\nYou are Late by %d Days",idays);
		printf("\nFine = %.2fRs",ffine);
	}
	else if(idays>=30)
	{
		ffine = 5*idays;
		printf("\nYou are Late by %d Days",idays);
		printf("\nYou'r Membership is Cancelled");
		printf("\nFine = %.2fRs",ffine);
	}
}
