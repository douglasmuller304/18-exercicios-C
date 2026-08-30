#include <stdio.h>
int main(){
    float pes, polegadas, jardas, milhas;
    printf("Digite o valor em pes: ");
    scanf("%f", &pes);
    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = jardas / 1760;
    printf("a) O valor em polegadas: %.2f\n", polegadas);
    printf("b) O valor em jardas: %.2f\n", jardas);
    printf("c) O valor em milhas: %.2f\n", milhas);
    return 0;
}