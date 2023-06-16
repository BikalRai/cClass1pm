#include <stdio.h>

int main () {
	
	int start = 100, end = 1000, remainder, original_num, sum;
	
	printf("The armstrong numbers between 100 and 1000 are:\n");
	
	for(start; start < end; start++) {
		
		original_num = start;
		sum = 0;
		
		while (original_num != 0) {
			remainder = original_num % 10;
			sum = sum + (remainder * remainder * remainder);
			original_num = original_num / 10;
		}
		
		if(start == sum) {
			printf("%d\n", start);
		}
	}
	
	
	return 0;
}
