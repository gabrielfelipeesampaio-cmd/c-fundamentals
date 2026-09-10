#include <stdio.h>

int soma_vetor(int array[], int tam){
    if(tam == 1){
        return array[0];
    }

    return array[0] + soma_vetor(array + 1, tam - 1);
}

int main(){
    int arr[3] = {2, 8, 3};
    printf("%d", soma_vetor(arr, 3));

    return 0;
}