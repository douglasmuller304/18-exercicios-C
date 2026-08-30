#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, ".UTF-8");
    float preco_fab, perc_lucro, perc_imposto, lucro, imposto, preco_final;
    printf("Preço de fábrica: ");
    scanf("%f", &preco_fab);
    printf("Percentual de lucro: ");
    scanf("%f", &perc_lucro);
    printf("Percentual de imposto: ");
    scanf("%f", &perc_imposto);
    lucro = preco_fab * perc_lucro / 100;
    imposto = preco_fab * perc_imposto / 100;
    preco_final = preco_fab + lucro + imposto;
    printf("Preço final: %.2f", preco_final);
    return 0;
}