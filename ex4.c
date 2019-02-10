/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
	int A[3][3];    // matrix A
	int B[3][3];    // matrix B
	int C[3][3];    // matrix to store their sum
	int i;
  // add your code below

	printf("Please enter 9 values for matrix A:\n");
	scanf("%d%d%d%d%d%d%d%d%d", &A[0][0], &A[0][1], &A[0][2], &A[1][0], &A[1][1], &A[1][2], &A[2][0], &A[2][1], &A[2][2]);

	printf("Please enter 9 values for matrix B:\n");
	scanf("%d%d%d%d%d%d%d%d%d", &B[0][0], &B[0][1], &B[0][2], &B[1][0], &B[1][1], &B[1][2], &B[2][0], &B[2][1], &B[2][2]);

	for(i = 0; i <= 2; i++) {

		C[i][0] = A[i][0] + B[i][0];
		C[i][1] = A[i][1] + B[i][1];
		C[i][2] = A[i][2] + B[i][2];

	}

	printf("C = B + A =\n");
	printf("%10d%10d%10d\n", C[0][0], C[0][1], C[0][2]);
	printf("%10d%10d%10d\n", C[1][0], C[1][1], C[1][2]);
	printf("%10d%10d%10d\n", C[2][0], C[2][1], C[2][2]);


}
