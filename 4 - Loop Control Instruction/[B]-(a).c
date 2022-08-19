/* [B] - (a) */

#include<stdio.h>
#include<string.h>
#define OVER_PAID_RATE 12.00
#define HOURS_LIMIT 40
int main(){
	float fOver_pay=0;
	char name[20];
	int work_t, iempid, i;
	for(i=0;i<=10;i++)
	{
		printf("\nEnter the Name :");
		scanf("%s",&name);
		printf("\nEnter the WorkTime :");
		scanf("%d",&work_t);
		if(work_t > HOURS_LIMIT)
		{
			work_t-=HOURS_LIMIT;
			fOver_pay=work_t*12.00;
			printf("\n* %s * Extra Work Time = %d and Over Time Pay = %.2f\n",name,work_t,fOver_pay);	
		}
		else
			printf("\n* %s * Work Time is Less Than Minimum Hours Limit\n",name);
	}
}
