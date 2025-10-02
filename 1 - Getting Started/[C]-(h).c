/* [C] - (h) */

/* Paper of size A0 has dimensions 1189mm x 841mm. Each subsequent size A(n) is defined as A(n-1) 
	cut in half parallel to its shorter sides. Write a program to calculate and print paper
	sizes A0, A1, A2, A3,... A8 */

//Headers	
#include<stdio.h>

int main(){

	//Local declarations
	int A0_a, A0_b, A1_a, A1_b, A2_a, A2_b, A3_a, A3_b, A4_a, A4_b, A5_a, A5_b, A6_a, A6_b,
	A7_a, A7_b, A8_a, A8_b;
	
	A0_a = 1189;
	A0_b = 841;
	printf("\n Paper Size A0 = %dmm x %dmm",A0_a,A0_b);
	
	A1_a = A0_b;
	A1_b = A0_a/2;
	printf("\n Paper Size A1 = %dmm x %dmm",A1_a,A1_b);
	
	A2_a = A1_b;
	A2_b = A1_a/2;
	printf("\n Paper Size A2 = %dmm x %dmm",A2_a,A2_b);
	
	A3_a = A2_b;
	A3_b = A2_a/2;
	printf("\n Paper Size A3 = %dmm x %dmm",A3_a,A3_b);
	
	A4_a = A3_b;
	A4_b = A3_a/2;
	printf("\n Paper Size A4 = %dmm x %dmm",A4_a,A4_b);
	
	A5_a = A4_b;
	A5_b = A4_a/2;
	printf("\n Paper Size A5 = %dmm x %dmm",A5_a,A5_b);
	
	A6_a = A5_b;
	A6_b = A5_a/2;
	printf("\n Paper Size A6 = %dmm x %dmm",A6_a,A6_b);
	
	A7_a = A6_b;
	A7_b = A6_a/2;
	printf("\n Paper Size A7 = %dmm x %dmm",A7_a,A7_b);
	
	A8_a = A7_b;
	A8_b = A7_a/2;
	printf("\n Paper Size A8 = %dmm x %dmm",A8_a,A8_b);

	return 0;
}
