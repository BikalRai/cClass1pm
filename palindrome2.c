#include <stdio.h>

int main () {
	
	int start = 100, end = 1000, remainder, original_num, reverse;
	
	printf("The palindrome numbers between 100 and 1000 are:\n");
	
	for(start; start < end; start++) {
		
		original_num = start;
		reverse = 0;
		
		while (original_num != 0) {
			remainder = original_num % 10;
			reverse = reverse * 10 + remainder;
			original_num = original_num / 10;
		}
		
		if(start == reverse) {
			printf("%d\n", start);
		}
	}
	
	
	return 0;
}
