/* [K] - (c) */

#include<stdio.h>
int main(){
	int inum1,inum2,inum3;
	printf("\nEnter the Number1 =");
	scanf("%d",&inum1);
	printf("\nEnter the Number2 =");
	scanf("%d",&inum2);
	printf("\nEnter the Number3 =");
	scanf("%d",&inum3);
	inum1>inum2&&inum1>inum3?printf("\nNumber1 is a Greatest Number"):inum2>inum1&&inum2>inum3?printf("\nNumber2 is a Greatest Number"):printf("\nNumber3 is a Greatest Number"); 
}
