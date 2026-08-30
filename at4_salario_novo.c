#include <stdio.h>
int main() {
    float salario, novo;
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

novo = salario * 1.25;
printf("O novo salario do funcionario e: %.2f\n", novo);
    return 0;

}
