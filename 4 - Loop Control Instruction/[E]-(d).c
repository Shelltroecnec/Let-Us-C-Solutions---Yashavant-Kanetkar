/* [E] - (d) */

#include<stdio.h>
int main(){
	int i=1,j,k;
	printf("\nFor all the combinations of 1,2, and 3 is shown below");
	for(;i<=3;i++)
	{
		for(j=1;j<i;j++)
		{
			for(k=1;k<=3;k++)
			{
				if((i==j)||(i==k)||(j==k))
					continue;
				printf("\n%d",i*100+j*10+k);
			}
		}
	}
}
