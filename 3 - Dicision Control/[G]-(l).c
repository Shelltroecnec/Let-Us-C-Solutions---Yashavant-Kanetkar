/* {G] - (l)*/

#include<stdio.h>
#include<math.h>
int main(){
	float Weight, fheight;
	float meter=0, BMI=0;
	
	printf("\n\t**BODY MASS INDEX CALCULATOR**\n");
	printf("\nEnter Your Weight(kg) :");
	scanf("%f",&Weight);
	printf("\nEnter Your Height(ft) :");
	scanf("%f",&fheight);
	
	//Converting feet into meters
	meter = fheight*0.3048;
	//Calculating BMI
	BMI = Weight/pow(meter,2);
	printf("%.2f",BMI);
	if(BMI < 15){
		printf("\n!! Starvation !!");
		printf("\nNotifing Health Care !");
	}
	else if(BMI >=15.1 && BMI <=17.5)
		printf("\n!! Anorexic !!");
	else if(BMI >=17.6 && BMI <=18.5)
		printf("\n!! Underweight !!");
	else if(BMI >= 18.6 && BMI <=24.9)
		printf("\n!! Ideal !!\nVery Good, Keep Up!");
	else if(BMI >=25 && BMI <=25.9)
		printf("\n!! Overweight !!");
	else if(BMI >=26 && BMI <=39.9){
		fflush(stdout);
		printf("\n!! Obese !!\nPlz do Excercise!");}
	else if(BMI >= 40){
		fflush(stdout);
		printf("\n!! Morbidly Obese !!\nNotifing Health Care !");}
}
