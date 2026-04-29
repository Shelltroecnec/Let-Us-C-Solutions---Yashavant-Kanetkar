/* [G] - (c) */

/* A 5-digit positive integer is entered through the keyboard, write a recursive and non-recursive function to 
   calculate sum of digits of  the 5-digit numners */

#include <stdio.h>

int RecursiveSumCalfn(int);
int Non_recursiveSumCalfn(int);

void main()
{
   int inum;

   printf("Enter a 5 digit number = ");
   scanf("%d",&inum);

   printf("Non-recursive function result : Entered number = %d and its Sum = %d.\r\n",inum, Non_recursiveSumCalfn(inum));
   printf("Recursive function result : Entered number = %d and its Sum = %d.\r\n",inum, RecursiveSumCalfn(inum));

}

// Non-Recursive function
int Non_recursiveSumCalfn(int num)
{
   int Sum=0;

   while (num > 0)
   {
      Sum += num % 10; //Extract the last digit
      num = num / 10; //Remove the last digit
   }
   return Sum;
}

// Recursive Function
int RecursiveSumCalfn(int num)
{
   int Sum=0;

   if(!num)
   return 0;

   return (num % 10) + RecursiveSumCalfn(num/10);
}