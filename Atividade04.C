#include <stdio.h>
#include <locale.h>
#include <iostream>

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
float P, A, IMC;

	printf("Informe a sua altura (M):");
		scanf("%f", &A);
	printf("Informe o seu peso (Kg):");
		scanf("%f", &P);
	IMC=P/(A*A);
	
	printf("Seu IMC é %f\n", IMC);

	if(IMC<18,5) {
		printf("O seu IMC está abaixo do peso!");
	} else if(IMC>18,5 && IMC <25) {
		printf("O seu IMC apresenta peso normal!");
	} else if(IMC>25 && IMC <30) {
		printf("O seu IMC está acima do peso!");
	} else if(IMC>30) {
		printf("O seu IMC apresenta peso obeso!");
	}
	return 0;
}

