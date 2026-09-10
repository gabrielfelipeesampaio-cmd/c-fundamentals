#include <stdio.h>

int eh_primo(int numero);

int main(){
    int num;
    scanf("%d", &num);
    while(num != 0){
        printf("%d\n", eh_primo(num));
        scanf("%d", &num);
    }
    


    return 0;
}

int eh_primo(int numero){
    for(int i = 2; i < numero; i++){
        if(numero % i == 0)
            return 0;
    }
    return 1;

}