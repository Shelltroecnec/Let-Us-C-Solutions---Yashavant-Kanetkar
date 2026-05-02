/* [D] - (a) */

/* Write a function to calculate the factorial value of any integer entered through the keyboard */

#include<stdio.h>

int factorialOfNum(int);

int main()
{
	int inum=0;
	printf("Enter the Number : ");
	scanf("%d",&inum);
	printf("\nFactorial of %d = %d\r\n", inum, factorialOfNum(inum));
}

int factorialOfNum(int iNumber)
{
	int fact = 1;

	while(iNumber != 0)
	{
		fact = fact * iNumber;
		iNumber--;
	}
	return fact;
}