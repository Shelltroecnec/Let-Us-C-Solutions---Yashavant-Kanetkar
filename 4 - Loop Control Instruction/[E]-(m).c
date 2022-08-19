/* [E] - (m) */

#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	printf("\n\t**Paythagorean Triplet**\n");
	printf("\nAre all the Pythagorean Triplet");
	for(a=1; a<=30; a++)
	{
	for(b=a; b<=30; b++)
	{
		for(c=b; c<=30; c++)
		{
			if(a*a+b*b==c*c || b*b+c*c==a*a || a*a+c*c==b*b)
				printf("\n%d %d %d",a,b,c);
		}
		}	
	}
}
