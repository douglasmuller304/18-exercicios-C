#include <stdio.h>
int main() {
    float salario, perc, aumento, novo;
    printf("Digite o salario do funcionario:");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento:");
    scanf("%f", &perc);

    aumento = salario * perc / 100;
    novo = salario + aumento;

    printf("Aumento: %.2f\nNovo salario: %.2f\n", aumento, novo);
return 0;
}