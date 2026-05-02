/* [D] - (c) */

/* Write a general -purpose function to convert any given year into its roman equivalent.
Use these roman equivalents for decimal numbers: 1-I, 5-V, 10-X, 50-L, 100-C, 500-D, 1000-M.

Example: Roman equivalent of 1988 is mdcccclxxxviii
         Roman equivalent of 1525 is mdxxv
*/

#include <stdio.h>
void NumToRomanNumCal(int);

void main()
{
    int inum = 0;

    printf("\t** Number - Roman number Calculator **\r\n");
    printf("Enter the number = ");
    scanf("%d", &inum);

    if (inum <= 0)
        printf("Entered number is Invalid..Please enter the valid integer numbers..\r\n");
    else
        NumToRomanNumCal(inum);
}

void NumToRomanNumCal(int num)
{
    printf("Roman Number = ");

    while (num != 0)
    {
        if (num >= 1000)
        {
            num = num - 1000;
            printf("M");
        }

        else if (num >= 500 && num < 1000)
        {
            num = num - 500;
            printf("D");
        }

        else if (num >= 100 && num < 500)
        {
            num = num - 100;
            printf("C");
        }

        else if (num >= 50 && num < 100)
        {
            num = num - 50;
            printf("L");
        }

        else if (num >= 10 && num < 50)
        {
            num = num - 10;
            printf("X");
        }

        else if (num >= 5 && num < 10)
        {
            num = num - 5;
            printf("V");
        }

        else if (num >= 1 && num < 5)
        {
            num = num - 1;
            printf("I");
        }
        else
            printf("\r\n");
    }
    printf("\r\n");
}