//9.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float peso;
    int idade, dosagem;
    printf("Informe idade do pasciente:\n");
    scanf("%d", &idade);
    printf("Informe peso (Kg) do pasciente:\n");
    scanf("%f", &peso);
    if (idade >= 12 && peso >= 60)
    {
        dosagem = 1000 / 25;
        printf("\nidade: %d anos\n", idade);
        printf("Peso: %.2fKg\n", peso);
        printf("O pasciente deve tomar 1000mg = %d gotas do medicamento\n\n", dosagem);
    }
    else
    {
        if (idade >= 12 && peso < 60)
        {

            dosagem = 875 / 25;
            printf("\nidade: %d anos\n", idade);
            printf("Peso: %.2fKg\n", peso);
            printf("O pasciente deve tomar 875mg = %d gotas do medicamento\n\n", dosagem);
        }
        else
        {
             if (peso >= 5 && peso <= 9)
            {
                dosagem = 125 / 25;
                printf("\nidade: %d anos\n", idade);
                printf("Peso: %.2fKg\n", peso);
                printf("O pasciente deve tomar 125mg = %d gotas do medicamento\n\n", dosagem);
            }
            else
            {
                if (peso >= 9.1 && peso <= 16)
                {
                    dosagem = 250 / 25;
                    printf("\nidade: %d anos\n", idade);
                    printf("Peso: %.2fKg\n", peso);
                    printf("O pasciente deve tomar 250mg = %d gotas do medicamento\n\n", dosagem);
                }
                else
                {
                    if (peso >= 16.1 && peso <= 24)
                    {
                        dosagem = 375 / 25;
                        printf("\nidade: %d anos\n", idade);
                        printf("Peso: %.2fKg\n", peso);
                        printf("O pasciente deve tomar 375mg = %d gotas do medicamento\n\n", dosagem);
                    }
                    else
                    {
                        if (peso >= 24.1 && peso <= 30)
                        {
                            dosagem = 500 / 25;
                            printf("\nidade: %d anos\n", idade);
                            printf("Peso: %.2fKg\n", peso);
                            printf("O pasciente deve tomar 500mg = %d gotas do medicamento\n\n", dosagem);
                        }
                        else
                        {
                            if (peso > 30)
                            {
                                dosagem = 750 / 25;
                                printf("\nidade: %d anos\n", idade);
                                printf("Peso: %.2fKg\n", peso);
                                printf("O paciente deve tomar 750mg = %d gotas do medicamento\n\n", dosagem);
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}