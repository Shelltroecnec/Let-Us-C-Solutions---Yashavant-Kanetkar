/* [C] - (a) */

#include<stdio.h>
int main(){
	float fbasic_sal, f_allowance, f_house, fgross_sal=0;
	
	printf("\n\t***Gross Salary Calculator**");
	printf("\n\nEnter Your Basic Salary :");
	scanf("%f",&fbasic_sal);
	f_allowance = (fbasic_sal/100)*40;
	f_house = (fbasic_sal/100)*20;
	fgross_sal = fbasic_sal + f_allowance + f_house;
	printf("\nGross Salary :Rs %.2f",fgross_sal);
}
