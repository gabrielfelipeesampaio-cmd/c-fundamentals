#include <stdio.h>

void str_reverse(char *string);

int main(){
    char teste[40] = {"dolores"};
    str_reverse(teste);
    printf("%s\n", teste);
    return 0;
}

void str_reverse(char *string){
    char *comeco = string;
    char *auxilio = string;
    char ajuda_letra;
    while(*string){
        auxilio++;
        string++;
    }
    auxilio --;
    printf("Teste ultimo caractere: %c\n", *auxilio);
    printf("Teste penultimo caractere: %c\n", *(auxilio - 1));
    //agora auxilio aponta para o ultimo caractere
    //agora e preciso fazer a troca de caracteres
    //while (*(comeco) != '\0') { 
    //como eu vou saber quando parar, sao endereços apontanto para o mesmo conteudo 
    while(comeco < auxilio){
        ajuda_letra = *comeco;
        *comeco = *auxilio;
        *auxilio = ajuda_letra;

        comeco++;
        auxilio--;
    }
}
