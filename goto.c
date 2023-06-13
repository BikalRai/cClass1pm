#include <stdio.h>

int main() {
	
	int num, i = 1;
	
	printf("Enter the number whose table you want to print\n");
	scanf("%d", &num);
	
	loop:
//		printf("%d x %d = %d\n", num, i, num * i);
		printf("Value of i = %d\n", i);
		i++;
		
	if(i <= 10) {
		goto loop;
	}
	
	
	return 0;
}
