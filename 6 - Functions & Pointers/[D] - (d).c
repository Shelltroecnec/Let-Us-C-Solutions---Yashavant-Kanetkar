/* [D] - (d) */

/* Any year is entered through the keyboard. Write a function to determine whether the year is a leap year or not. */

#include <stdio.h>
void LeapyearCalfn(int);

void main()
{
    int iyear;

    printf("\t** LEAP YEAR CALCULATOR\r\n");
    printf("Enter the year to know whether the year is Leap year or not = ");
    scanf("%d", &iyear);
    
    if(iyear <= 0)
    printf("Entered Year = %d is invalid. Please enter the right year..\r\n", iyear);
    else
    LeapyearCalfn(iyear);
}

void LeapyearCalfn(int year)
{
    if(year % 4 == 0)
    printf("Entered year = %d is a \"Leap Year\".\r\n", year);
    else
    printf("Entered year = %d is NOT a \"Leap Year\".\r\n", year);
}