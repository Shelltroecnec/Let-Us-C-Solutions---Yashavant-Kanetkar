/* [D] - (b) */

#include <stdio.h>
int PowerOf(int,int);
int ibase=0, iraise=0;

int main()
{
	printf("Enter the Numbers to calculate Power of any Number\n");
	printf("Enter the Base Number :");
	scanf("%d",&ibase);
	printf("\nEnter the Raise to number :");
	scanf("%d",&iraise);
	printf("\n%d ^ %d = %d",ibase,iraise,PowerOf(ibase,iraise));
}

int PowerOf(int base, int raiseto)
{
	int i;
	for(i=raiseto; i!=0; i++)
		base = base * i;
	return base;
}