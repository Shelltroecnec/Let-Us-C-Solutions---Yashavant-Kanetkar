/* [C] - (e) */

#include<stdio.h>
int main(){
	int inum,ire,irev=0;
	
	printf("Enter the 5 Digit Number =");
	scanf("%d",&inum);
	while(inum !=0){
		ire = inum % 10;
		irev = irev * 10 + ire;
		inum/=10;
	}
	printf("\nReverse Number = %d",irev);
	if(inum == irev)
		printf("\nOriginal number %d and Reversed number %d are equal",inum,irev);
	else
		printf("\nThey are not Equal");
}
