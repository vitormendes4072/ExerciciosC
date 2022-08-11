
#include <stdio.h>
//ex5
void main() {
    int lado1, lado2, lado3;
    printf("Digite o primeiro lado: \n");
    scanf("%i", &lado1);
    printf("Digite o segundo lado: \n");
    scanf("%i", &lado2);
    printf("Digite o terceiro lado: \n");
    scanf("%i", &lado3);
    int perimetro = lado1 + lado2 + lado3;
    printf("O perímetro do triângulo com lados %i, %i, %i é de %i", lado1, lado2, lado3, perimetro);
}
