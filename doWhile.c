#include <stdio.h>

int main () {
	
	int a = 23;
	
	do {
		printf("%d\n", a);
		a++;
	} while(a < 10);
	
	printf("out of loop");
	
	
	return 0;
}
