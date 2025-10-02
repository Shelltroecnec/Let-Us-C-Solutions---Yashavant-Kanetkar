/* [E] - (p) */

#include<stdio.h>
#include<string.h>
int main(){
	char a[3]="am",b[3]="pm", c[3]="end";
	int i;
	printf("\n\t**24-Hours Day**\n");
	for(i=0;i<=23;i++)
	{
		printf("\n%d",i);
		if(i==0 && !(strcmp(a,"am")))
			printf(" AM - Midnight");
		else if(i==11 && !(strcmp(b,"pm")))
			printf(" PM - Midday",i);
		else if(i==23 && !(strcmp(c,"end")))
			printf(" End od Day");
	}
}
