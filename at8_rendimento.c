#include <stdio.h>
int main() {
    float deposito, taxa, rend, total;
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros:");
    scanf("%f", &taxa);
    
    rend = deposito * taxa / 100;
    total = deposito + rend;
    printf("O rendimento é: %.2f\n", rend);

    return 0;
}
