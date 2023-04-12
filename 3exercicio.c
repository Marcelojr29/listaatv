//3.escreva um programa que leia um numero inteiro que represente a idade de uma pessoa em anos e calcule numa variavel real quantos minutos esta pessoa ja viveu.

#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
  int idade_anos;
  float tempo_vida_minutos;
  
  printf("Digite sua idade em anos: ");
  scanf("%d", &idade_anos);

  tempo_vida_minutos = idade_anos * 365 * 24 * 60;

  printf("Você já viveu aproximadamente %.2f minutos.\n", tempo_vida_minutos);

  return 0;
}