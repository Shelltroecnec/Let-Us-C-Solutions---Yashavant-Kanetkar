/* [H] - (j) */

/* Wind chill factor is the felt air temperature on exposed skin due to wind. Thw wind chill temperature 
	is always lower than the air temperature, and is calculated as per the following formula: 
	wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * V^0.16 */

//Headers
#include<stdio.h>
#include<math.h>

int main(){

	//Local declarations
	float ftemp, fvelocity, fwcf; //NOTE : As per formula t = ftemp and v = fvelocity
	
	printf("\tProgram to Find Wind Chill Factor\n");
	printf("\nEnter the Temperature =");
	scanf("%f",&ftemp);
	printf("\nEnter the Velocity of Wind =");
	scanf("%f",&fvelocity);
	
	//Formula to Calulate Wind Chill Factor
	fwcf = 35.74 + 0.6215*ftemp + (0.42751*ftemp-35.75)*pow(fvelocity,0.16);
	printf("\nFor the Air Temperature(%f) & Air Velocity(%f)",ftemp,fvelocity);
	printf("\nThe Wind Chill Factor =%f",fwcf);

	return 0;
}
