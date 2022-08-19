/* [B] - (b) */

#include<stdio.h>
int main(){
	int inum=0,ifact=1, i;
	
	printf("\nEnter the Number :");
	scanf("%d",&inum);
	for (i=1; i<=inum;i++)
	{
		ifact = inum*i;
	}
	printf("\nFactorial 0f %d = %d",inum,ifact);
}
