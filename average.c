#include<stdio.h>
#include<stdlib.h>

int main(){

 //Klavyeden 3 sınav 1 proje notu girilen öğrencinin ortalaması

	int mark1, mark2, mark3, markProject, average;

	printf("Please enter mark 1: ");
	scanf("%d", &mark1);

	printf("Please enter mark 2: ");
	scanf("%d", &mark2);

	printf("Please enter mark 3: ");
	scanf("%d", &mark3);

	printf("Please enter project mark: ");
	scanf("%d", &markProject);

	average = (mark1 + mark2 + mark3 + markProject)/4;
	printf("Your score: %d", average);


	return 0;
}