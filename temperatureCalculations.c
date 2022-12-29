#include<stdio.h>
#include<stdlib.h>

int main(){

//Temperature Transformations

float fahrenheit, celsius, kelvin;

	printf("Please enter Fahrenheit degree: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - 32) / 1.8;
    kelvin = (fahrenheit - 32) * 5/9 + 273,15;

	printf("%f Celsius Degree\n", celsius);
    printf("%f Kelvin Degree", kelvin);

    return 0;
}