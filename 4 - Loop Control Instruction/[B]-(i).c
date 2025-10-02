/* [B] - (i) */

#include<stdio.h>
int main(){
	int inum, imin, imax, irange=0, how,i;
	
	printf("\n Enter the Numbers, you want to enter :");
	scanf("%d",&how);
	
	imin=imax=how;
	for(i=1; i <=how; i++)
	{
		printf("\nEnter the Number :");
		scanf("%d",&inum);
		if(inum > imax)
			imax=inum;
		else if(inum < imin)
			imin=inum;
	}
	irange = imax - imin;
	printf("\nThe Range = %d", irange);
}
