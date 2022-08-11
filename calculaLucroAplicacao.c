#include <stdio.h>
//ex 4
void main() {
    float rendimentoAno = 0.1365;
    float aplicacaoInicial = 2500, aplicacao = 2500;
    float rendimento;
    for (int i = 1; i < 4; i++){
        rendimento = aplicacao * rendimentoAno;
        aplicacao = aplicacao + rendimento;
    }
    printf("Seu rendimento da aplicacao %f foi de de %f", aplicacaoInicial, aplicacao);
}
