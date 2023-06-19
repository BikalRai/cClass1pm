// WAP to sort array elements in descending order

#include <stdio.h>

int main () {
	
	int num, i, j, temp;
	
	printf("Enter no of elements:\n");
	scanf("%d", &num);
	
	int arr[num];
	
	for (i = 0; i < num; i++) {
		printf("Enter element %d\n", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Elements before sorting\n");
	for(i = 0; i < num; i++) {
		printf("%d\t", arr[i]);
	}
	
	for (i = 0; i < num; i++) {
		for (j = i+1; j < num; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\n\nElements after sorting\n");
	for(i = 0; i < num; i++) {
		printf("%d\t", arr[i]);
	}
	
	return 0;
}
