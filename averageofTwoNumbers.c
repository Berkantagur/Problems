
#include <stdio.h>
#include <stdlib.h>

int main(void) {

//The average of two numbers

	float number1, number2, average;

	printf("Please enter number1: ");
	scanf("%f", &number1);

	printf("Please enter number2: ");
	scanf("%f", &number2);

	average = (number1 + number2) / 2;
	printf("Average: %f", average);

return 0;
}