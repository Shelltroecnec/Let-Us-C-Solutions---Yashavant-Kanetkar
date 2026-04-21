/* [G] - (a) */

/* Write a function that recieves 5 integers and returns the sum, average and standard deviation of these numbers. 
   Call this function from the main() and print the results in the main() */

#include <stdio.h>
#include <math.h>

//Function Prototype or declaration
double StandardDeviationfn(int, int, int, int, int);

int main()
{
	int inum1,inum2,inum3,inum4,inum5, iAnswer=0;
	
	printf("\nEnter the 5 Number :");
	scanf("%d %d %d %d %d",&inum1,&inum2,&inum3,&inum4,&inum5);
	iAnswer = inum1+inum2+inum3+inum4+inum5;
	printf("\nSum of 5 entered Number = %d",iAnswer);
	printf("\nAverage of 5 entered Number  %d/5 = %d",iAnswer,iAnswer/5); //Since the count of the entered number is 5.
	printf("\nStandard Deviation of the 5 entered number = %.2lf\r\n", StandardDeviationfn(inum1, inum2, inum3, inum4, inum5));
}


/* Standard deviation is a statistical measure that quantifies the amount of dispersion or spread of a set of data points around their mean (average) 
	
Steps to Calculate Standard Deviation (Step-by-Step) :
1. Calculate the Mean: Sum the numbers and divide by the count.
2. Find Squared Deviations: For each number, subtract the mean and square the result (distance squared).
3. Find Variance: Sum all squared deviations and divide by the count (population) or n-1(sample).
4. Square Root: Take the square root of the variance

Example:
For data set {10, 11, 12, 13, 14}, the average is 12.

1. Squares: (10-12)2=4, (11-12)2=1, (12-12)2=0, (13-12)2=1, (14-12)2=4. NOTE: where,(num-num)2 is square.
2. Sum: 4+1+0+1+4 = 10.
3. Divide (sample n-1): Here, we have 5 samples. Hence (5-1) = 4.
						Then, 10 / 4 = 2.5 (Variance)
4. Square-root: square-root of 2.5 = 1.58 (Standard deviation)

*/
double StandardDeviationfn(int num1, int num2, int num3, int num4, int num5)
{
	int average; 
	double sum, variance, stddevresult = 0;

	average = (num1 + num2 + num3 + num4 + num5) / 5;
	sum = pow((num1 - average),2) + pow((num2 - average),2) + pow((num3 - average),2) + pow((num4 - average),2) + pow((num5 - average),2);
	variance = sum / 4; //Since, We have 5 sample as input. Hence, (5-1) = 4. Therefore, we're dividing by 4.
	stddevresult = sqrt(variance);
	return stddevresult;
}