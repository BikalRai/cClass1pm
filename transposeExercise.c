#include <stdio.h>

int main () {
	
	int matrix[3][4], transpose[3][4], i,j;
	
	printf("Enter elements of matrix\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	
	// you can print matrix before tranpose here
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			transpose[i][j] = matrix[j][i];
		}
	}
	
	printf("Matrix after tranposed:\n");
	for(i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
