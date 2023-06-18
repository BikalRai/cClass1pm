#include <stdio.h>

int main () {
	int a[10], even = 0, odd = 0, i;
	
	printf("Enter elements of array\n");
	
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
		
		if(a[i] % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}
	
	printf("Total no. of even numbers = %d\n", even);
	printf("Total no. of odd numbers = %d\n", odd);
	
	
	
	return 0;
}
