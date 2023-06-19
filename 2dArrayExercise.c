// WAP to take input from user for 3 x 4 matrix and output the sum of the matrix elements

#include <stdio.h> 

int main() {
	
	int i, j, matrix[3][4], sum = 0;
	
	printf("Enter elements of 3 x 4 matrix\n\n\n");
	
	for (i = 0; i < 3; i++) {
		for(j = 0; j < 4; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("\n\nElements of matrix\n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j< 4; j++) {
			printf("%d\t", matrix[i][j]);
			sum += matrix[i][j];
		}
		
		printf("\n");
	}
	
	printf("\n\nSum = %d", sum);
	
	
	return 0;
}
