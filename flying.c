#include<stdio.h>
#include<stdlib.h>

int main(){

//Bir uçaktaki bagaj sınırı 15kg, içeri sınırı 8kg.
//Yolcunun bu sınırları aştığı biliniyor.
//Aştığı her kg'da bagaj için 11TL, içeri için 6TL ödeme var.
//Buna göre yolcu kaç TL ödeme yapar?
	
	int baggage, indoor, weight1, weight2, repayment;
    
    printf("Please enter baggage weight:");
    scanf(" %d ", &weight1);

    printf("Please enter indoor weight:");
    scanf(" %d ", &weight2);

	baggage = weight1 - 15;
	indoor = weight2 - 8;
	repayment = baggage * 11 + indoor * 6;

	printf("The fee you need to pay: %d TL", repayment);

	return 0;
}