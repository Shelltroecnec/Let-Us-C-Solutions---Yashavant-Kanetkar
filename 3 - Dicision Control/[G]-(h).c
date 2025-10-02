/* [G] - (h) */

#include<stdio.h>
#include<string.h>
#define STOCK 100
char init(){
	//Assume Company Shippes Earphones
	char cAns,sName[]="",sCmpName="";
	int idefault=0;
	printf("\nEnter Your Name :");
	scanf("%s",&sName);
	printf("\nEnter Your Company Name:");
	scanf("%s",&sCmpName);
	printf("\nDo You have Outstanding to ours, Y/N :");
	fflush(stdin);
	scanf("%c",&cAns);
	if(cAns=='Y' || cAns=='y'){
		idefault=1;
		printf("\n\t SORRY !\nPLZ PAY THE OUTSTANDING !");
	}
	else{
		return cAns;
	}
}

int main(){
	int iQnty=0;
	char Ans;
	Ans = init();
	if(Ans=='N' || Ans=='n'){
		printf("\nEnter the Quantity required:");
		scanf("%d",&iQnty);
		if(iQnty <= STOCK)
			printf("\nThank You for your Order.\nYour Order will be Shipped within this week.");
		else if(iQnty > STOCK){
			printf("\nYour Quantity=%d",iQnty);
			printf("\nYour Quantity is More than Available in Stock. Hence Remaining will be shipped within this week.\nThank You !");
		}
	}
}
