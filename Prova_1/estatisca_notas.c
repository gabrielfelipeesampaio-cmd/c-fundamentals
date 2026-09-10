#include <stdio.h>

void estatistica_notas(float array[], int tamanho);

int main() {
    float arr[4] = {2.5, 7.5, 5.5, 4.5};
    estatistica_notas(arr, 4);
    

    return 0;
}

void estatistica_notas(float array[], int tamanho){
    float soma = 0.0;
    float menor = array[0];
    float maior = array[0];
    for(int i = 0; i < tamanho; i++){
        soma += *(array + i);
        if(i > 0){
            if(array[i] < menor){
                menor = array[i];                
            }
            if(array[i] > maior){
                maior = array[i];
            }
        }
        
    }
    float media = soma / tamanho;
    int contador = 0;
    for(int i = 0; i < tamanho; i++){
        if(array[i] > media){
            contador++;
        }
    }
    printf("Media = %.2f\n", media);
    printf("Maior = %.2f\n", maior);
    printf("Menor = %.2f\n", menor);
    printf("Quantidade acima da media = %d", contador);
    
}
