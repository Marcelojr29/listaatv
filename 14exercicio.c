//14.
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    int idade, maior_idade = 0;
    char sexo, cor_olhos, cor_cabelos;
    int contador_feminino_verde_louro = 0, contador_feminino_total = 0;

    printf("Digite os dados dos habitantes:\n");

    while (1) {
        printf("Sexo (m/f): ");
        scanf(" %c", &sexo);
        if (sexo == 'm' || sexo == 'f') {
            printf("Cor dos olhos (a/v/c): ");
            scanf(" %c", &cor_olhos);
            if (cor_olhos == 'a' || cor_olhos == 'v' || cor_olhos == 'c') {
                printf("Cor dos cabelos (l/c/p): ");
                scanf(" %c", &cor_cabelos);
                if (cor_cabelos == 'l' || cor_cabelos == 'c' || cor_cabelos == 'p') {
                    printf("Idade (-1 para sair): ");
                    scanf("%d", &idade);
                    if (idade == -1) {
                        break;
                    }
                    if (idade > maior_idade) {
                        maior_idade = idade;
                    }
                    if (sexo == 'f') {
                        contador_feminino_total++;
                        if (idade >= 18 && idade <= 35 && cor_olhos == 'v' && cor_cabelos == 'l') {
                            contador_feminino_verde_louro++;
                        }
                    }
                } else {
                    printf("Cor dos cabelos inválida. Tente novamente.\n");
                }
            } else {
                printf("Cor dos olhos inválida. Tente novamente.\n");
            }
        } else {
            printf("Sexo inválido. Tente novamente.\n");
        }
    }

    printf("Maior idade: %d\n", maior_idade);

    if (contador_feminino_total == 0) {
        printf("Nenhum habitante do sexo feminino foi registrado.\n");
    } else {
        float percentual_feminino_verde_louro = (float) contador_feminino_verde_louro / contador_feminino_total * 100.0;
        printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros: %.2f%%\n", percentual_feminino_verde_louro);
    }

    return 0;
}