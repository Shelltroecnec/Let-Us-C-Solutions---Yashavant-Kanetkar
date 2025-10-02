/* [G] - (c) */

#include<stdio.h>
int main(){
	int ihard,itensil;
	float fcarbon=0;
	printf("\nEnter the Hardeness of the Steel =");
	scanf("%d",&ihard);
	printf("\nEnter the Carbon content of the Steel =");
	scanf("%f",&fcarbon);
	printf("\nEnter the Tensil of the Steel =");
	scanf("%d",&itensil);
	
	if(ihard>50 && fcarbon<=0.7 && itensil>5600)
		printf("\nIt is a Grade 10 Steel");
	else if(ihard>50 && fcarbon<=0.7)
		printf("\nIt is a Grade 9 Steel");
	else if(fcarbon<=0.7 && itensil>5600)
		printf("\nIt is a Grade 8 Steel");
	else if(ihard>50 && itensil>5600)
		printf("\nIt is a Grade 7 Steel");
	else if(ihard>50 || fcarbon<=0.7 || itensil>5600)
		printf("\nIt is a Grade 6 Steel");
	else
		printf("\nIt is a Grade 5 Steel");
}
