#include <stdio.h>

int main() {
    // Write C code here
    char nome[100];
    double fixo, vendas;
    scanf("%s\n%lf\n%lf", nome, &fixo, &vendas);
    //calcular acrescimo
    double soma = 0.0;
    soma += vendas*0.15;
    printf("TOTAL = R$ %.2lf", fixo + soma);

    return 0;
}