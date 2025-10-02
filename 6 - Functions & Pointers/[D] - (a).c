/* [D] - (a) */

#include<stdio.h>

int factorialOfNum(int);
int inum=0, fact=1;

int main()
{
	printf("Enter the Number :");
	scanf("%d",&inum);
	printf("\nFactorial of %d = %d",inum,factorialOfNum(inum));
}

int factorialOfNum(int iNumber)
{
	while(iNumber != 0)
	{
		fact = fact * iNumber;
		iNumber--;
	}
}