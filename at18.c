#include <stdio.h>

int main() {
    float peso_kg, racao1, racao2, peso_g, resto;

        printf("Peso do saco(kg): ");
    scanf("%f", &peso_kg);
        printf("Ração gato 1 por dia (g): ");
    scanf("%f", &racao1);
        printf("Ração gato 2 por dia (g): ");
    scanf("%f", &racao2);

            peso_g = peso_kg * 1000;
            resto = peso_g - (racao1 + racao2) * 5;
            
        printf("Resto do saco: %.2f g", resto);
return 0;
}