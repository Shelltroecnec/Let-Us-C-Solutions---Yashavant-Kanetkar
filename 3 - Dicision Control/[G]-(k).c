/* [G] - (k) */

#include<stdio.h>
#include<string.h>
int main(){
	int iDate, iMonth;
	
	printf("\n**Enter Your Date to Known your Zodiac Sign**");
	printf("\nEnter your Birthdate :");
	scanf("%d%d",&iDate,&iMonth);
	if(iDate>=22 && iMonth==12 || iDate<=19 && iMonth==1){
		printf("\n**Capricorn**");
		printf("\nYou are Demon!!");
	}
	else if(iDate>=20 && iMonth==1 || iDate<=17 && iMonth==2){
		printf("\n**Aquarius**");
		printf("\nYou are Demon!!");
	}
	else if(iDate>=18 && iMonth==2 || iDate<=19 && iMonth==3){
		printf("\n**Pisces**");
		printf("\nYou are Angel!!");
	}
	else if(iDate>=20 && iMonth==3 || iDate<=19 && iMonth==4){
		printf("\n**Aries**");
		printf("\nYou are Demon!!");
	}
	else if(iDate>=20 && iMonth==4 || iDate<=20 && iMonth==5){
		printf("\n**Taurus**");
		printf("\nYou are Angel!!");
	}
	else if(iDate>=21 && iMonth==5 || iDate<=20 && iMonth==6){
		printf("\n**Gemini**");
		printf("\nYou are Satan!!");
	}
	else if(iDate>=21 && iMonth==6 || iDate<=22 && iMonth==7){
		printf("\n**Cancer**");
		printf("\nYou are Angel!!");
	}
	else if(iDate>=23 && iMonth==7 || iDate<=22 && iMonth==8){
		printf("\n**Leo**");
		printf("\nYou are God!!");
	}
	else if(iDate>=23 && iMonth==8 || iDate<=22 && iMonth==9){
		printf("\n**Virgo**");
		printf("\nYou are Angel!!");
	}
	else if(iDate>=23 && iMonth==9 || iDate<=22 && iMonth==10){
		printf("\n**Libra**");
		printf("\nYou are Angel!!");
	}
	else if(iDate>=23 && iMonth==10 || iDate<=21 && iMonth==11){
		printf("\n**Scorpio**");
		printf("\nYou are Demon!!");
	}
	else if(iDate>=22 && iMonth==12 || iDate<=21 && iMonth==12){
		printf("\n**Sagittarius**");
		printf("\nTou are Demon!!");
	}
}
