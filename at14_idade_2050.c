#include <stdio.h>
int main(){
    float ano_nasc, ano_atual, idade, idade_2050;
    printf("Ano de nascimento: ");
    scanf("%f", &ano_nasc);
    printf("Ano atual: ");
    scanf("%f", &ano_atual);
    idade = ano_atual - ano_nasc;
    idade_2050 = 2050 - ano_nasc;
    printf("a) Idade atual: %.2f\n", idade);
    printf("b) Idade em 2050: %.2f\n", idade_2050);
    return 0;
}
