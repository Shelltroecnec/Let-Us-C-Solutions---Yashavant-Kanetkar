/* [B] - (h) */

#include<stdio.h>
#include<math.h>
int main(){
	int inum,irev=0,iremain=0,ioct, p=0,i;
	
	printf("\nEnter the Octal Number :");
	scanf("%d",&inum);
	ioct=inum;
	while(inum > 0){
		iremain = inum % 10;
		inum /= 10;
		irev = irev + iremain*pow(8,p);
		++p;
	}
	
	printf("\nEntered Octal number : %d and Integer number : %d",ioct,irev);
}
