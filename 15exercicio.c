//15.
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
    int i, j, numTurmas, numAlunos, numAusentes, numPresentes, numTurmasComAusenciaSuperiorA5;
    float percentualAusencia;

    numTurmasComAusenciaSuperiorA5 = 0;

    printf("Digite o número de turmas: ");
    scanf("%d", &numTurmas);

    for (i = 1; i <= numTurmas; i++) {
        printf("Digite o número de alunos matriculados na turma %d: ", i);
        scanf("%d", &numAlunos);

        numAusentes = 0;
        numPresentes = 0;

        for (j = 1; j <= numAlunos; j++) {
            char matricula;
            printf("Digite a matrícula (A/P) do aluno %d: ", j);
            scanf(" %c", &matricula);

            if (matricula == 'A') {
                numAusentes++;
            } else if (matricula == 'P') {
                numPresentes++;
            }
        }

        percentualAusencia = ((float) numAusentes / numAlunos) * 100;
        printf("Turma %d: %.2f%% de ausência\n", i, percentualAusencia);

        if (percentualAusencia > 5) {
            numTurmasComAusenciaSuperiorA5++;
        }
    }

    printf("%d turmas tiveram porcentagem de ausência superior a 5%%\n", numTurmasComAusenciaSuperiorA5);

    return 0;
}