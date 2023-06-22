#include <stdio.h>

void pali();

int main () {
	
	
	pali();
	return 0;
}

void pali () {
	
	int num, remainder, original_num, reverse = 0;
	
	printf("Enter number:\n");
	scanf("%d", &num);
	
	original_num = num;
	
	while (num != 0) {
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num = num / 10;
	}
	
	if (reverse == original_num) {
		printf("Number is palindrome");
	} else {
		printf("Number is not palindrome");
	}
}
