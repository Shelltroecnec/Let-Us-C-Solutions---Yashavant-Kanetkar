/* [C] - (f) */

#include<stdio.h>
int main(){
	int ia_ram,ia_sham,ia_ajay;
	
	printf("Enter the Age of Ram =");
	scanf("%d",&ia_ram);
	printf("\nEnter the Age of Sham =");
	scanf("%d",&ia_sham);
	printf("\nEnter the Age of Ajay =");
	scanf("%d",&ia_ajay);
	
	if(ia_ram < ia_sham && ia_ram < ia_ajay)
		printf("\nRam is the Youngest");
	else if(ia_sham < ia_ram && ia_sham < ia_ajay)
		printf("\nSham is the Youngest");
	else if(ia_ajay < ia_ram && ia_ajay < ia_sham)
		printf("\nAjay is the Youngest");
}
