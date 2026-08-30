#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("%.2f elevado a %.2f = %.2f", n1, n2, pow(n1, n2));
    return 0;
}
