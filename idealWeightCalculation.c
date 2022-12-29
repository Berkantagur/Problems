#include<stdio.h>
#include<stdlib.h>

int main(){

//IDEAL WEIGHT CALCULATION
// (size-100 + age/10) * 0.8 -->female   0.9 -->male

	float size, weight, age;

	printf("Please enter a size value: ");
	scanf("%f", &size);

	printf("Please enter a age value: ");
	scanf("%f", &age);
	
	weight = (size - 100 + age / 10) * 0.9;
	printf("Your ideal weight: %f", weight);


return 0;
}