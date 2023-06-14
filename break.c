#include <stdio.h>
#include <conio.h>

int main () {
	
	int num, sum = 0, i = 1;
	
	while(i != 0) {
		
		printf("Enter number:\n");
		scanf("%d", &num);
		
		if (num < 0) {
			printf("Entered negative value\n");
			getch();
			printf("Exiting...\n");
			getch();
			break;
		}
		
		sum += num;
	}
	
	printf("Sum = %d\n", sum);
	
	printf("Out of loop");
	
	
	return 0;
}
