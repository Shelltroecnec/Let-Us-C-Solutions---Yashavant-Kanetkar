/* [G] - (j) */

#include<stdio.h>
int main(){
	float fRed, fGreen, fBlue, fCyan, fMagenta, fYellow, fWhite, fBlack;
	printf("\nEnter the Colour Ration of Red, Green, Blue(RGB)");
	printf("\nEnter the Red :");
	scanf("%f",&fRed);
	printf("\nEnter the Green :");
	scanf("%f",&fGreen);
	printf("\nEnter the Blue :");
	scanf("%f",&fBlue);
	
	//Calculation the 
	fRed = fRed/255;
	fGreen = fGreen/255;
	fBlue = fBlue/255;
	//Calculating the White Ratio
	if(fWhite < fRed)
		fWhite=fRed;
	else if(fWhite < fGreen)
		fWhite=fGreen;
	else if(fWhite < fBlue)
		fWhite=fBlue;
	
	//Calculating the CMYK
	fCyan = (fWhite - fRed/255) / fWhite;
	fMagenta = (fWhite - fGreen/255) / fWhite;
	fYellow = (fWhite - fBlue/255) / fWhite;
	fBlack = 1-fWhite;
	
	printf("\nCyan=%.2f Magenta=%.2f Yellow=%.2f Black=%.2f",fCyan,fMagenta,fYellow,fBlack);
}
