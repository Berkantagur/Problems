#include<stdio.h>
#include<stdlib.h>

int main(){
//Sınav netine göre toplam puan hesabı

	//Turkish:1.999
	//Mathematics:3.998
	//Science:2.999
	//Social:1.000
	//Base:100.160

	float turkish, mathematics, science, social, base, totalscore;
	base = 100.160;

	printf("Please enter your Turkish score: ");
	scanf("%f", &turkish);

	printf("Please enter your Mathematics score: ");
	scanf("%f", &mathematics);

	printf("Please enter your Science score: ");
	scanf("%f", &science);

	printf("Please enter your Social score: ");
	scanf("%f", &social);

	totalscore = turkish * 1.999 + mathematics * 3.998 + science * 2.999 + social * 1.000 + base;
	printf("Your total score: %f", totalscore);

return 0;
}