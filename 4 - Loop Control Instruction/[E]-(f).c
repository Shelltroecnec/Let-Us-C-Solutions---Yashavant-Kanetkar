/* [E] - (f) */

#include<stdio.h>
int main()
{
	int inum,i;
	printf("\n\t***MULTIPLICATION TABEL***");
	printf("\n\nEnter the Number for which you want Multiplication Table :");
	scanf("%d",&inum);
	for (i=1;i<=10;i++)
	{
		printf("%dx%d = %d\n",inum,i,inum*i);
	}
}
