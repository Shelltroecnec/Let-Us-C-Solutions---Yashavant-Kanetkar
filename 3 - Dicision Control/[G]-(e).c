/* [G] - (e) */

#include<stdio.h>
int main(){
	int is1, is2, is3, itotal=0;
	
	printf("\nEnter the Side1 of a Given Triangle =");
	scanf("%d",&is1);
	printf("\nEnter the Side2 of a Given Triangle =");
	scanf("%d",&is2);
	printf("\nEnter the Side3 of a Given Triangle =");
	scanf("%d",&is3);
	
	if((is1<(is2+is3)) && (is2<(is1+is3)) && is3<(is1+is2))
		printf("\nEntered Triangle is a Valid Triangle");
	else
		printf("\nEntered Triangle is not a Valid Triangle");
}
