/* [C] - (c) */

#include<stdio.h>
int main(){
	float eng, hindi, marathi, socialS, math, fTotal, fPercentage;
	
	printf("\n\t ***MARKS & PERCENTAGE CALCULATOR***\n");
	printf("\nNOTE : Obtained Marks Should not be greater than 100\n");
	printf("\nEnter the English Marks : ");
	scanf("%f",&eng);
	printf("\nEnter the Hindi Marks : ");
	scanf("%f",&hindi);
	printf("\nEnter the Marathi Marks : ");
	scanf("%f",&marathi);
	printf("\nEnter the Social Science Marks : ");
	scanf("%f",&socialS);
	printf("\nEnter the Math Marks : ");
	scanf("%f",&math);
	//Total Marks
	fTotal = eng+hindi+marathi+socialS+math;
	//Calculating Percentage
	fPercentage = fTotal/500*100;
	printf("\n\nTotal Aggregate = %.2f\nPercentage = %.2f",fTotal,fPercentage);
}
