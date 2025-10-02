/* [C] */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int iOption, iNum, i,prime=1,fact=1;
	while(1)
	{
		printf("\n\n\t******MENU******\n");
		printf("Select the Option need to be performed\n");
		printf("1.\tFactorial of a Number\n2.\t Prime or not\n3.\t Odd or Even\n4.\t Exit");
		printf("\n\nSelect :");
		scanf("%d",&iOption);
		
		switch(iOption)
		{
			case 1:
				printf("\n\nEnter the Number to find its Factorail :");
				scanf("%d",&iNum);
				for(i= 1; i<= iNum; i++)
					fact = fact*i;
				printf("***Factorial of %d = %d***",iNum,fact);
				break;
			
			case 2:
				printf("\nEnter the Number to find Prime or not :");
				scanf("%d",&iNum);
				for(i=2; i<iNum; i++)
				{
					if(!(iNum % i))
						prime=0;
				}
				
				if(prime==1)
					printf("\n***Entered Number %d is a Prime Number***",iNum);
				else
					printf("\n***Entered Number %d is not a Prime Number***",iNum);
				break;
			
			case 3:
				printf("\nEnter the Number to find Even and Odd :");
				scanf("%d",&iNum);
				if(iNum%2==0)
					printf("\nEntered number %d is Even Number",iNum);
				else
					printf("\nEntered number %d is Odd Number",iNum);
				break;
				
			case 4:
				printf("\n*****! Thank You !*****");
				exit(1);
				break;
				
			default:
				printf("\nInavlid Option, plz Select right Option");
				break;
		}
	}
}