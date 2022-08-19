/* [E] - (j) */

#include<stdio.h>
int main(){
	int y,j;
	float x=0, i;
	
	printf("\n\t***Intelligence Calculator***\n");
	printf("\nEnter the Value of y =");
	scanf("%d",&y);
	if(y>=1 && y<=6)
	{
		for(j=1;j<=6;j++)
		{
			for(x=5.5; x<=12.5; x=x+0.5)
			{
				i = 2 + (j + 0.5*x);
				printf("\nIntillegence tabel\ny =%d\t x =%.2f\t = %.2f",j,x,i);
			}
		}
	}
}
