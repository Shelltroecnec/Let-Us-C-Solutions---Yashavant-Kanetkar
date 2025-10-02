/* [C] - (a) */

/* Ramesh basic salary is input through the keyboard. His dearness allowance is 40% of basic salary,
	and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary */

// Header	
#include<stdio.h>

int main(){

	//Local Declarations
	float fbasic_sal, f_allowance, f_house, fgross_sal=0;
	
	printf("\n\t***Gross Salary Calculator**");
	printf("\n\nEnter Your Basic Salary :");
	scanf("%f",&fbasic_sal);
	f_allowance = (fbasic_sal/100)*40;
	f_house = (fbasic_sal/100)*20;
	fgross_sal = fbasic_sal + f_allowance + f_house;
	printf("\nGross Salary :Rs %.2f",fgross_sal);
	return 0;
}
