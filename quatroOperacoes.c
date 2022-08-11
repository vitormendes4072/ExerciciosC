#include <stdio.h>
//ex1
void main() {
    int a, b;
    printf("Insira o primeiro número: \n");
    scanf("%i", &a);
    printf("Insira o segundo número: \n");
    scanf("%i", &b);
    int adicao = a + b;
    int subtracao = a - b;
    int divisao = a / b;
    int multiplicacao = a * b;
    printf("Adição = %i \n", adicao);
    printf("Subtração = %i \n", subtracao);
    printf("Dividsão = %i \n", divisao);
    printf("multiplicação = %i \n", multiplicacao);
}
