/* [G] - (a) */

#include<stdio.h>
#include<stdlib.h>
//Function Prototype or declaration
int basicNumberfunc(int,int,int,int,int); 

int main()
{
	int inum1,inum2,inum3,inum4,inum5, iAnswer=0;
	
	printf("\nEnter the 5 Number :");
	scanf("%d %d %d %d %d",&inum1,&inum2,&inum3,&inum4,&inum5);
	iAnswer =basicNumberfunc(inum1,inum2,inum3,inum4,inum5);
	printf("\nSum of 5 Entered Number = %d",iAnswer);
	printf("\nAverage of 5 Entered Number  %d/=5",iAnswer);
}

int basicNumberfunc(int a,int b, int c, int d, int e)
{
	return a+b+c+d+e;
}