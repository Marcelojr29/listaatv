//2. Para os algoritmos abaixo, informe qual a saída de acordo com as entradas fornecidas:

//a) ENTRADA: nota1 = 9,5 nota2 = 8,0
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL, "Portuguese");
float nota1, nota2, media;

printf("digite a primeira nota ");
scanf("%f", &nota1);

printf("digite a segunda nota ");
scanf("%f", &nota2);

media= (nota1+nota2)/2;

printf("a media final é: %.2f", media);

return 0;	
}

//b) ENTRADA: nome = "Jurubeba Asdrúbol" idade = 45
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL, "Portuguese");
    char nome[50];	
	int idade;
	
	printf("digite o seu nome: ");
	scanf("%s", &nome);
	
	printf("digite sua idade: ");
	scanf("%d", &idade);
	
	printf("%s tem %d anos", nome, idade);
	
	return 0;
}