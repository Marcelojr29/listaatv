//11.
#include <stdio.h>

int main() {
    int t1 = 0, t2= 1; /
    int t3; 

    printf("Os 10 primeiros termos da série Fettuccine são:\n");
    printf("%d\n%d\n", t1, t2); 

    for (int i = 3; i <= 10; i++) { 
        t3 = t1 - t2; 
        printf("%d\n", t3); 
        t1 = t2; 
        t2 = t3; 
    }
    return 0;
}

//portugol

//algoritmo "SerieFettuccine"
//var
   //t1, t2, t3: inteiro
   //i: inteiro
//Inicio
//t1 <- 0
//t2 <- 1
//escreva("Os 10 primeiros termos da série Fettuccine são: ")
//escreval(t1)
//escreval(t2)
//para i de 3 ate 10 passo 1 faca
//t3 <- t1 - t2
//escreval(t3)
//t1 <- t2
//t2 <- t3
//fimPara

//fimAlgoritmo