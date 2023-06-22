#include <stdio.h>

char character () {
	char c;
	printf("Enter an alphabet\n");
	scanf("%c", &c);
	
	return c;
}

int main () {
	
	char c;
//	c = character();
//	printf("\nThe character is %c", c);
	
	printf("\nThe character is %c", character());
	return 0;
}
