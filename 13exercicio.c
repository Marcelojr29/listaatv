1//3. Fazer um programa que leia um valor e depois calcule e escreva o resultado do seguinte somatório:
//x^25/1 - x^24/2 + x^23/3 - x^22/4+ ... + x^01/25

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	float x, s = 0;
    int i, sinal = 1;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    for(i = 25; i >= 1; i--) {
        s += sinal * pow(x, i) / i;
        sinal *= -1; // alterna o sinal a cada termo
    }

    printf("O resultado do somatório é: %.2lf\n", s);

    return 0;
}

//Saída:
//Digite um valor para x: 1
//O resultado do somatório é: 0,71