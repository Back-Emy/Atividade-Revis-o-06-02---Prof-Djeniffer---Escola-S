#include <stdio.h>
#include <locale.h>
#include <iostream>

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
int V1, V2, V3;
	
	printf("Escreva o valor de A:");
		scanf("%d", &V1);
	printf("Escreva o valor de B:");
		scanf("%d", &V2);

	if(V1 == V2){
		V3=V1+V2;
		printf("A soma de A e B é %d.", V3);
	}else{
		V3=V1*V2;
		printf("A multiplicação de A e B é %d.", V3);
	}
	return 0;
}

