//4.
 #include <stdio.h>
#include <math.h>

int main() {
  
    double x1, y1, x2, y2, x3, y3;


    printf("Digite as coordenadas do ponto 1 (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas do ponto 2 (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Digite as coordenadas do ponto 3 (x3, y3): ");
    scanf("%lf %lf", &x3, &y3);

    
    double dist_ponto1_ponto2 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

   
    double dist_ponto1_ponto3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    
    double dist_ponto2_ponto3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    printf("Distância entre ponto 1 e ponto 2: %.2f\n", dist_ponto1_ponto2);
    printf("Distância entre ponto 1 e ponto 3: %.2f\n", dist_ponto1_ponto3);
    printf("Distância entre ponto 2 e ponto 3: %.2f\n", dist_ponto2_ponto3);

    return 0;
}