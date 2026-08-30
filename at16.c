#include <stdio.h>
int main(){
    float horas, sal_min , valor_hora, sal_bruto, imposto, sal_receber;
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &sal_min);
    printf("Digite o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    sal_bruto = horas * valor_hora;
    imposto = sal_bruto * 0.03;
    sal_receber = sal_bruto - imposto;
    printf("a) Salario bruto: %.2f\n", sal_bruto);
    printf("b) Impostto: %.2f\n", imposto);
    printf("c) Salario a receber: %.2f\n", sal_receber);
    return 0;
}