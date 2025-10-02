/* [C] -(i) */

#include<stdio.h>
int main(){
	int ilength,ibreadth;
	float fArea, fperimeter;
	
	printf("\nEnter the Length of a Rectangle =");
	scanf("%d",&ilength);
	printf("\nEnter the Breadth of a Rectangle =");
	scanf("%d",&ibreadth);
	
	//Finding the Area of Rectangle
	fArea = ibreadth*ilength;
	//Finding the Perimeter of Rectangle
	fperimeter = 2*(ilength+ibreadth);
	
	if(fArea > fperimeter)
		printf("\nEntered Rectangle Area=%f is Greater than its Perimeter=%f",fArea,fperimeter);
	else
		printf("\nEntered Rectang;e Area=%f is not Greater than its Perimeter=%f",fArea,fperimeter);
}
