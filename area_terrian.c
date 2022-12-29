#include<stdio.h>
#include<stdlib.h>

int main(){

//Radius of the circle: pi*r*r
//Terrian of the circle: 2*pi*r

	float radius, area, terrian, pi;

	printf("Please enter the radius of the circle: ");
	scanf("%f", &radius);
	pi = 3.1428;
	area = pi * radius * radius;
	terrian = 2 * pi * radius;
	printf("Area: %f\n", area);
	printf("Terrian: %f", terrian);

    return 0;
}