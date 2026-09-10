#include <stdio.h>

char *str_cpy(char *str_d,char *str_2);

int main(){
    char string[20];
    char string2[] = {"c e a melhor"};
    printf("%s", str_cpy(string, string2));
    return 0;
}

char *str_cpy(char *str_d,char *str_2){
    //int i = 0;
    //while(str_2[i] != 0){
    //    str_d[i] = str_2[i];
    //    i++;
    //}
    //str_d[i] = '\0';
    //jeito usanso aritmetica de ponteiros

    int auxilio = 0;

    while(*(str_2 + auxilio)){
        *(str_d + auxilio) = *(str_2 + auxilio);
        auxilio++;
    }
    *(str_d + auxilio) = '\0';

    return str_d ; 

}