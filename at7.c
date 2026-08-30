#include <stdio.h>
int main() {
    float base, receber;
    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &base);

    receber = base + 50 - base * 0.10;
    printf ("O salario base a receber do funcionario e: %.2f\n", receber);
return 0;
}