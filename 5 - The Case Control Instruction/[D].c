/* [D] */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdint.h>
#include<Windows.h>

#define TOTAL_SUBJECTS 5

int main()
{
	//Variable Declaration
	uint8_t iClass=0, nSub;
	char sName[10];
	
	printf("\t******GRACE MARKS CALCULATOR******\n");
	printf("\nEnter the Student Name :");
	gets(sName);
	printf("\nEnter the Class :");
	scanf("%d",&iClass);
	
	switch(iClass)
	{
		case 1:
			system("cls");
			printf("\nEnter the Number of Subjets you Failed out of 5 :");
			scanf("%d",&nSub);
			if(nSub > TOTAL_SUBJECTS){
				printf("\nInvalid SubjectsNumber !");exit(1);}
			else if(nSub >= 3){
				printf("\nNot Eligible for Grace Marks");exit(1);}
			
			printf("\n%s Eligible for Grace Marks!\n 5 Marks Per Subject i.e. Total 25 Marks has been awarded !!",sName);
			break;
		
		case 2:
			system("cls");
			printf("\nEnter the Number of Subjets you Failed out of 5 :");
			scanf("%d",&nSub);
			if(nSub > TOTAL_SUBJECTS){
				printf("\nInvalid SubjectsNumber !");exit(1);}
			else if(nSub >= 2){
				printf("\nNot Eligible for Grace Marks");exit(1);}
			
			printf("\n%s Eligible for Grace Marks!\n 4 Marks Per Subject i.e. Total 20 Marks has been awarded !!",sName);
			break;
			
		case 3:
			system("cls");
			printf("\nEnter the Number of Subjets you Failed out of 5 :");
			scanf("%d",&nSub);
			if(nSub > TOTAL_SUBJECTS){
				printf("\nInvalid SubjectsNumber !");exit(1);}
			else if(nSub >= 1){
				printf("\nNot Eligible for Grace Marks");exit(1);}
			
			printf("\n%s Eligible for Grace Marks!\n 3 Marks Per Subject i.e. Total 15 Marks has been awarded !!",sName);
			break;
			
		default:
			system("cls");
			printf("\n! Inavlid Class !");
			exit(1);
	}
}