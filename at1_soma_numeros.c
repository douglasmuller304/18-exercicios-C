#include <stdio.h>
int main() {
    float n1, n2, n3, n4, soma;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota:");
    scanf("%f", &n2);

    printf("Digite a terceira nota:");
    scanf("%f", &n3);

    printf("Digite a quarta nota:");
    scanf("%f", &n4);

    soma = n1 + n2 + n3 + n4;
    printf("\nO total do calculo: %.2f\n", soma);

    return 0;
}
