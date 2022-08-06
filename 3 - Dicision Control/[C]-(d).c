/* [C] - (d) */

#include<stdio.h>
int main(){
	int iyear,iday=0,i=1;

	printf("Enter the Year =");
	scanf("%d",&iyear);
	//Logic to find the First Day of Year
	//Counting the Day in the Entered Year
	for(i=1;i<iyear;i++){
		if(i % 4==0)
			iday = iday + 366;
		else
			iday = iday + 365;
	}
	
	iday = iday % 7;
	if(iday == 1)
		printf("\nIt'll be Monday on 01/01/%d.",iyear);
	else if(iday == 2)
		printf("\nIt'll be Tuesday on 01/01/%d.",iyear);
	else if(iday == 3)
		printf("\nIt'll be Wednesday on 01/01/%d.",iyear);
	else if(iday == 4)
		printf("\nIt'll be Thursday on 01/01/%d.",iyear);
	else if(iday == 5)
		printf("\nIt'll be Friday on 01/01/%d.",iyear);
	else if(iday == 6)
		printf("\nIt'll be Saturday on 01/01/%d.",iyear);
	else if(iday == 7)
		printf("\nIt'll be Sunday on 01/01/%d.",iyear);

}
