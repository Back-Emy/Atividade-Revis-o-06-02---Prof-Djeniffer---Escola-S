#include <stdio.h>
#include <locale.h>
#include <iostream>

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
float P, A, IMC;
int imc;

	printf("Informe a sua altura (m):");
		scanf("%f", &A);
	printf("Informe o seu peso (Kg):");
		scanf("%f", &P);
	IMC=P/(A*A);
	
	printf("Seu IMC é %f\n", IMC);

	if(IMC<18,5) {
		IMC=imc;
			imc=1;		
	} else if(IMC>18,5 && IMC <25) {
		IMC=imc;
			imc=2;	
	} else if(IMC>25 && IMC <30) {
		IMC=imc;
			imc=3;	
	} else if(IMC>30) {
		IMC=imc;
			imc=4;	
	}
	switch (imc){
	 
	case 1:
		printf("O seu IMC está abaixo do peso!");
	break;
	
	case 2:
		printf("O seu IMC apresenta peso normal!");
	break;
	
	case 3:
		printf("O seu IMC está acima do peso!");
	break;
	
	case 4:
		printf("O seu IMC apresenta peso obeso!");
	break;
	}
	
return 0;
}

