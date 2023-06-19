#include <stdio.h>

int main () {
	int i, j;
	int arr[3][4];
	
	printf("Enter elements of matrix\n\n\n\n");
	
	for(i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("The elements of matrix are\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}
