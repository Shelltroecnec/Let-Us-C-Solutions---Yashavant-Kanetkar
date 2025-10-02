/* [C] - (c) */

/* If the marks obtained by a student in a five different subjets are input through the keyboard.
	Write a program to find out the aggregate marks and percentage marks obtained by the student.
	Assume that the maximum marks that can be obtained by a student in each subject is 100 */

//Headers	
#include<stdio.h>

int main(){

	//Local Declarations
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

	return 0;
}
