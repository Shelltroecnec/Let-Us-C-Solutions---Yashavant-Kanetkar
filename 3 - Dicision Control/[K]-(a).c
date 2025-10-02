/* [K] - (a) */

#include<stdio.h>
int main(){
	char ch;
	
	printf("\nEnter the Charachter =");
	scanf("%c",&ch);
	ch >='a' && ch<='z'? printf("\nEnter Charchter %c is LowerCase",ch): ch >='0' && ch <='9'? printf("\nEnter Charchter %c is Digit",ch):ch >='A'&&ch<='Z'?printf("\nEntere Charchter %c is Uppercase",ch):printf("\nEnter Chrachter %c is SpecialCharachter",ch);
}
