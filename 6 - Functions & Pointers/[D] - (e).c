/* [D] - (e) */

/* A Positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number
   Example : Prime factors of 24 are 2, 2, 2 and 3. whereas prime factors of 35 are 5 and 7. */

#include <stdio.h>

void PrimeFactorCalfn(int);

void main()
{
    int inum;

    printf("\t** Prime Factor Calculator **\r\n");
    printf("Enter the number = ");
    scanf("%d", &inum);

    PrimeFactorCalfn(inum);
}

/*
To calculate the prime factors of a number, you use a process called prime factorization,
which involves repeatedly dividing the number by the smallest possible prime numbers until you reach 1.

1. Divide by two
Start with the smallest prime number, 2. If the number is even, divide it by 2.
Continue dividing the resulting quotient by 2 until it is no longer divisible (becomes odd).
Record every 2 you used.

2. Try the next prime
Move to the next prime number, 3. Divide the remaining quotient by 3.
If it divides evenly, repeat the process with the new quotient until it is no longer divisible by 3.

3. Continue with larger primes
Continue this process with subsequent prime numbers (5, 7, 11, etc.)
as long as the prime number squared is less than or equal to the remaining quotient.

4. Record the final prime
If the remaining quotient is greater than 1 after testing all possible smaller primes,
that remaining number is the final prime factor.

Example: Prime factors of 60
Divide by 2: 60 / 2 = 30
Divide by 2 again: 30 / 2 = 15
Divide by 3: 15 / 3 = 5
Remaining quotient: 5 is prime, so we stop.
The prime factors are 2, 2, 3, and 5. Written as a product: 2 x 2 x 3 x 5 = 60.

*/
void PrimeFactorCalfn(int num)
{
    int i, count2=0, count3 = 0;

    for (i = 0; num % 2 == 0; i++)
    {
        num = num / 2;
        count2++;
    }

    for (i = 0; (num % 2 != 0 ) && (num <= 9); i++)
    {
        num = num / 3;
        count3++;
    }

    num = num / 5;

    printf("Prime factors of num %d are %d, %d\r\n", num, count2, count3);
}
