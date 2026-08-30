#include <stdio.h>
#include <math.h>
int main() {
    float n;
    printf("Digite um numero > 0:");
    scanf("%f", &n);

    printf("Ao quadrado: %.2f\n", n * n);
    printf("Ao cubo: %.2f\n", n * n * n);
    printf("Raiz quadrada: %.2f\n", sqrt(n));
    printf("Raiz cubica: %.2f\n", cbrt(n));
     
    return 0;
}
