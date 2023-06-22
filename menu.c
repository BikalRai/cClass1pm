#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main () {
	
	 int running = 1, opt;
	 
	 
	 while (running) {
	 	system("cls");
	 	printf("Enter your choice\n1)Multiplication Table\n2)Convert to fahrenheit\n3)Calculator\n4)exit\n");
	 	opt = option ();
	 	switch(opt) {
	 		case 1:
	 			multiTable();
	 			break;
	 		case 2:
	 			printf("Convert to fahrenheit\n");
	 			getch();
	 			break;
	 		case 4:
	 			running = 0;
	 			break;
	 		default:
	 			printf("Invalid option");
	 			
		 }
	 }
	 
	 printf("Thank you for using the program");
	
	
	
	return 0;
}

int option () {
	int choice;
	printf("Enter your choice\n");
	scanf("%d", &choice);
	
	return choice;
}

int multiTable() {
	
}
