/* [H] - (j) */

#include<stdio.h>
#include<math.h>
int main(){
	float ftemp,v,fwcf;
	
	printf("\tProgram to Find Wind Chill Factor\n");
	printf("\nEnter the Temperature =");
	scanf("%f",&ftemp);
	printf("\nEnter the Velocity of Wind =");
	scanf("%f",&v);
	
	//Formula to Calulate Wind Chill Factor
	fwcf = 35.74 + 0.6215*ftemp + (0.42751*ftemp-35.75)*pow(v,0.16);
	printf("\nFor the Air Temperature(%f) & Air Velocity(%f)",ftemp,v);
	printf("\nThe Wind Chill Factor =%f",fwcf);
}
