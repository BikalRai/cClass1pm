#include <stdio.h>

int main () {
	float c, f;
	
	printf("Enter temperature in Celsius:\n");
	scanf("%f", &c);
	
	// forumala to change Celsius to Fahrenheit = F = C x (9/5) + 32;
	f = (c * 9 / 5) + 32;
	
	printf("%.1f C = %.1f F", c, f);
	
	
	return 0;
}
