#include <stdio.h>

void reset(int *p);

int main(){
    int numero = 5;
    int *ponteiro = &numero;
    reset(ponteiro);
    printf("%d", numero);

    return 0;
}

void reset(int *p){
    *p = 0;
}