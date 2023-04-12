//8. Entrar com a sigla do estado de uma pessoa e imprimir uma das mensagens, programar em C:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
    setlocale(LC_ALL, "Portuguese");
    char sigla;
    printf("Digite um estado de uma pessoa: ");
    scanf(" %c", &sigla);
    
    if (strcmp(sigla, "AM") == 0)
	{
        printf("A pessoa é Amazonense\n");
    } else if (strcmp(sigla, "RJ") == 0) {
        printf("A pessoa é Carioca\n");
    } else if (strcmp(sigla, "PA") == 0) {
        printf("A pessoa é Paraense\n");
    } else if (strcmp(sigla, "AC") == 0) {
        printf("A pessoa é Acreana\n");
    } else {
        printf("Escolha inválida\n");
    }
    return 0;
}