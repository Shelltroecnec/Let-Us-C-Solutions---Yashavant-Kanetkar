/* [G] - (g) */

#include<stdio.h>
#include<string.h>
int main(){
	float ftime;

	printf("\nEnter the Time taken by worker in minutes:");
	scanf("%f",&ftime);
	if(ftime <= 180)
		printf("\nWorker is Very Efficient");
	else if(ftime >=180 && ftime <=240)
		printf("\nWorker is Efficient, but need to increase speed");
	else if(ftime >=240 && ftime <=300)
		printf("\nWorker is not Efficient, need to have Trianing");
	else
		printf("\nWorker is not Efficient, plz Terminate!");
}
