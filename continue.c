#include <stdio.h>

int main () {
	int i, num, sum = 0;
	
	for (i = 0; i < 5; i++) {
		printf("Enter number:\n");
		scanf("%d", &num);
		
		if (num < 0) {
			continue;
		}
		
		sum += num;
		
	}
	
	printf("Sum = %d\n", sum);
	printf("Out of loop");
	
	return 0;
}
