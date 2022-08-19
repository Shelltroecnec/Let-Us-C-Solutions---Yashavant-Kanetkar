/* [E] - (h) */

#include<stdio.h>
int main(){
	int l,i,j,a=4,b=1,c=1;
	
	for(l=1;l<=4;l++)
	{
		for(i=1;i<=a;i++)
		{
			printf(" ");
		}
		a--;
		for(j=1; j<=b; j++)
		{
			printf("%d ",c);
			c++;
		}
		b++;
		printf("\n");
	}	
}
