//7.a prefeitura de manaus abriu uma linha de credito para funcionarios estagiarios, o valor maximo da prestacao nao podera ultrapassar 30% do salario bruto, faça um algoritmo em c que permite entrar com o salario bruto e o valor da prestacao e informa se o emprestimo pode ou não ser concedido

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    float salario_bruto, prestacao, limite;

    printf("Digite o valor do salário bruto: R$");
    scanf(" %f", &salario_bruto);
    printf("Digite o valor da prestação: R$");
    scanf(" %f", &prestacao);

    limite = salario_bruto * 0.3;

    if(prestacao > limite){
        printf("Empréstimo negado! O valor da prestação excede o limite de 30%% do salário bruto\n");
    }else{
        printf("Empréstimo concedido! O valor da prestação não ultrapassa 30%% do salário bruto\n");
    }
    return 0;
}