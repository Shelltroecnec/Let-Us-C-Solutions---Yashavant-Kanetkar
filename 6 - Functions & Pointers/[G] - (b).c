/* [G] - (b) */

/* Write a function that receives marks received by a student in 3 subjects and returns the average and percentage of 
 these marks. Call this function from the main() and print the result in main() */

#include <stdio.h>
void AvgPercentCalfn(float,float,float, float*, float*);

void main()
{
    float sub1, sub2, sub3, fAverage, fPercentage = 0.0;

    printf("\t Average and Percentage Calculator\r\n");
    printf("\nEnter the Marks of the three subjects\r\n");
    printf("Subject-1 = ");
    scanf("%f",&sub1);
    printf("Subject-2 = ");
    scanf("%f",&sub2);
    printf("Subject-3 = ");
    scanf("%f",&sub3);
    AvgPercentCalfn(sub1, sub2, sub3, &fAverage, &fPercentage);
    printf("\nAverage = %.2f, Percentage = %.2f\r\n",fAverage, fPercentage);
}

void AvgPercentCalfn(float Sub1, float Sub2, float Sub3, float *Av, float *per)
{
    //Assuming the Total Marks is 300, each subject has 100 Marks.
    //Average Calculation
    *Av = (Sub1 + Sub2 + Sub3) / 3;
    //Percentage Calculation
    *per = *Av / 3;
}