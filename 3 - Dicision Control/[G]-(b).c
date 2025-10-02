/* [G] - (b) */

#include<stdio.h>
int main(){
	char ch;
	printf("\nEnter the Charachter =");
	scanf("%c",&ch);
	if(ch>=97&&ch<=122)
		printf("\nEntered Charchter %c is Small Case",ch);
	else if(ch>=65&&ch<=90)
		printf("\nEntered Charachter %c is Upper Case",ch);
	else if(ch>=48&&ch<=57)
		printf("\nEntered Charchter %c is a Digit",ch);
	else
		printf("\nEntered Charchter %c is a Special Charachter",ch);
	getch();
}
