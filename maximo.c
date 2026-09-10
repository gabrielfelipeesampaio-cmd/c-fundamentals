#include <stdio.h>

int maximo(int num1, int num2);

int main(){
    printf("%d", maximo(5, 4));



    return 0;
}


int maximo(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    return num2;
}