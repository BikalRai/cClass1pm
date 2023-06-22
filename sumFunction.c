#include <stdio.h>

void sum(int, int );

int main () {
	
	int a, b;
	printf("Enter values of a and b\n");
	scanf("%d%d", &a,&b);
	
	sum(a, b);
	
	return 0;
}

void sum (int x, int y) {
	int result = x + y;
	printf("The sum is= %d", result);
}
