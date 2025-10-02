/* [E] - (a) */

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j, flag;
	printf("2, 3, ");
	for(i = 3; i <= 300; i += 2)
	{
		for(j = 2; j <= (sqrt(i)); j++)
		{
			if( ! (i % j) )
			{
				flag = 0;
				break;
			}
			flag = 1;
		}
		if(flag)
			printf("%d, ", i);
	}
	printf("are the prime number.");
}
