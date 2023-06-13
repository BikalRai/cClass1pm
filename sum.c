#include <stdio.h>

int main () {
	
	int num, sum = 0;
	
	do {
		printf("Enter positive number(enter 0 to exit):\n");
		scanf("%d", &num);
		sum -= num;
	} while(num != 0);
	
	printf("The sum is = %d", sum);
	
	return 0;
	
}
