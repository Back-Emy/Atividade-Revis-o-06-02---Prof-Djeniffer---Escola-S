#include <stdio.h>
#include <locale.h>
#include <iostream>

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
printf ("Atividade 06/02 - Prof Djeniffer\n\n");
	
int A, B, C, Soma;

printf (" Insira os valores!\n");

printf("  Valor de A: ");
	scanf("%d", &A);
printf("\n  Valor de B: ");
	scanf("%d", &B);
printf("\n  Valor de C: ");	
	scanf("%d", &C);	

Soma = A+B;
	if (Soma < C){
		printf( "\nA soma de A mais B é menor que C");
}
	
return 0;
}

