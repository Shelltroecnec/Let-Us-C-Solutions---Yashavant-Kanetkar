/* [C] -(j) */

#include<stdio.h>
int main(){
	int ix1,ix2,ix3;
	int iy1,iy2,iy3;
	int ar=0;
	printf("\nEnter the Value of (x1,y1) =");
	scanf("%d%d",&ix1,&iy1);
	printf("\nEnter the Value of (x2,y2) =");
	scanf("%d%d",&ix2,&iy2);
	printf("\nEnter the Value of (x3,y3) =");
	scanf("%d%d",&ix3,&iy3);
	ar= (ix1*(iy2-iy3) + ix2*(iy3-iy1) + ix3*(iy1-iy2));//condition for collinear
	
	if(!ar)
		printf("\n\nThe points are collinear.");
	else
		printf("\n\nThe points are not collinear.");
	
	//To check there's is an example (0, -2) , (2, 4) and (-1, -5).
}
