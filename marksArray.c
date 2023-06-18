#include <stdio.h>

int main () {
	int i;
	float marks[5], sum = 0, avg;
//	printf("Enter marks of 5 subjects\n");
	for (i = 0; i < 5; i++) {
		printf("Enter marks of subject %d\n", i + 1);
		scanf("%f", &marks[i]);
	}
	
	printf("--------------------------------------------\n");
	
	for(i = 0; i < 5; i++) {
		sum = sum + marks[i];
	}
	
	avg = sum / 5;
	
	printf("Sum = %.1f\n", sum);
	printf("Average of 5 subjects = %.1f", avg);
	
	
	return 0;
}
