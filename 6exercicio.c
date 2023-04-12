//6.crie um algoritmo em c que calcula e imprima a area de um losango

#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    float d1, d2, area;

    printf("Informe a diagonal 1: ");
    scanf("%f", &d1);

    printf("Informe a diagonal 2: ");
    scanf("%f", &d2);

    area = (d1 * d2) / 2;

    printf("A area do losango e: %.2f", area);

    return 0;
}