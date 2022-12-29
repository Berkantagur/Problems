#include<stdio.h>
#include<stdlib.h>

int main(){

    //Calculation of what is bought at Burger King

	int numberOfBurgers, numberOfCokes, numberOfSauces, numberOfPotatoes, cost;

	printf("Please enter number of burgers: ");
	scanf("%d",&numberOfBurgers);

	printf("Please enter numbers of cola: ");
	scanf("%d",&numberOfCokes);

	printf("Please enter numbers of souce: ");
	scanf("%d",&numberOfSauces);

	printf("Please enter number of potatoes: ");
	scanf("%d",&numberOfPotatoes);

	cost = numberOfBurgers * 35 + numberOfCokes * 14 + numberOfSauces * 4 + numberOfPotatoes * 17;

	printf("Amount you have to pay: %d TL", cost);
	
	return 0;
}