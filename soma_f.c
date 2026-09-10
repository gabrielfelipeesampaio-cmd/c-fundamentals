#include <stdio.h>

int mais_vezes(int arr[], int tam, int n);

int main(){
    int array[] = {2, 4, 6, 8};
    int tam = 4;
    int n = 2;
    printf("%d", mais_vezes(array, tam, n));
    
    return 0;
}

int mais_vezes(int arr[], int tamanho, int n){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += *(arr + i) * n;
    }
    return soma;
}
