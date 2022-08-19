/* [E] - (k) */

#include<stdio.h>
#include<math.h>
int main()
{
	float a,b, p,r,q,i,n,j;
	printf("\n\tINtereset");
	for(i=1;i<=10;i++)
	{
	printf("\nEnter the Interest Compound per Year =");
	scanf("%f",&q);
	printf("\nEnter the Annual Rate =");
	scanf("%f",&r);
	fflush(stdin);
	printf("\nEnter the Number of Years =");
	scanf("%f",&n);
	fflush(stdin);
	printf("\nEnter the Principal Amount =");
	scanf("%f",&p);
	b = pow((p*(1 + r/q)),n*q);
	a = p*b;
	printf("\na = %f",a);
	}
}
