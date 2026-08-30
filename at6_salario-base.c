#include <stdio.h>
int main() {
    float base, receber;
    printf("Digite o salario-base do funcionario: ");
    scanf("%f", &base);

    receber = base + base * 0.05 - base * 0.07;
    printf ("O salario base a receber do funcionario e: %.2f\n", receber);
return 0;
}
