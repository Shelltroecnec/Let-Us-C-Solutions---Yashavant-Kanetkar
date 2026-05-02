/* [D] - (b) */

/* Write a function power (a, b), to calculate the value of a raised to b. */

#include <stdio.h>

int PowerOf(int,int);

int main()
{
	int ibase, iraise = 0;

	printf("Enter the Numbers to calculate Power of any Number\n");
	printf("Enter the Base Number : ");
	scanf("%d",&ibase);
	printf("Enter the Raise to number : ");
	scanf("%d",&iraise);
	printf("\n%d ^ %d = %d.\r\n", ibase, iraise, PowerOf(ibase,iraise));
}

// My POW function
int PowerOf(int base, int raiseto)
{
	int i, result=1;

	for(i=1; i<=raiseto; i++)
	{
		result = result * base;
	}
	
	return result;
}