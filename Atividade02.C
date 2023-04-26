#include <stdio.h>
#include <locale.h>
#include <iostream>

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
printf ("Atividade 06/02 - Prof Djeniffer\n");
	
int Num;

printf("Insira um valor inteiro:");
	scanf("%d", &Num);
	
if  (Num % 2 == 0){
	printf("O valor é par");
}else{
	printf("O valor é impar");
}
return 0;
}

