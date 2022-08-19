/* [E] - (c) */

#include<stdio.h>
#include<math.h>
int main(){
	int i=1, j;
	float ser, itemp,sum=0;
	for(; i<=7; i++)
	{
		itemp=i;
		for(j=1; j<i; j++)
			itemp = itemp*j;
		
		ser = i/itemp;
		sum = sum + ser;
	}
	printf("\n%.2f is a Sum of Given Series.",sum);
	
}
