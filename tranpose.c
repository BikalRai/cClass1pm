#include <stdio.h>

int main () {
	
	int matrix[3][4], i, j;
	
	printf("Enter matrix elements:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("Matrix before transpose:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("Transposed matrix:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", matrix[j][i]);
		}
		
		printf("\n");
	}
	
	return 0;
}
