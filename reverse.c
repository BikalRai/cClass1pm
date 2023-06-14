#include <stdio.h>

int main () {
	
	int num = 123, remainder, reverse = 0;
	
	while (num > 0) {
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num = num / 10;
	}
	
	printf("Reverse = %d", reverse);
	
	
	
	
	return 0;
}
