/* [B] - (g) */

#include<stdio.h>
int main(){
	int icount, inum,ipos=0,i,ineg=0,izero=0;
	
	printf("\nEnter the Numbers, till you want to enter :");
	scanf("%d",&icount);
	for(i=1;i<=icount;i++)
	{
	printf("\nEnter the Number :");
	scanf("%d",&inum);
	if(inum > 0)
		ipos++;
	else if(inum < 0)
		ineg++;
	else
		izero++;
	}
	
	printf("\nFrom %d Numbers : Positive = %d, Negative = %d, Zeros = %d",icount, ipos,ineg,izero);
}
