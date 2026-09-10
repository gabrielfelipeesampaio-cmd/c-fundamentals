#include <stdio.h>

char swap(char *str1,char *str2);


int main(){
    char str1[5]= {"dado"};
    char str2[5] = {"dedo"};
    swap(str1, str2);
    printf("%s\0%s", str1, str2);

    return 0;
}

char swap(char *str1, char *str2){
    char auxilio[40];
    char *p_aux = auxilio;

    while(*str1){
        *p_aux = *str1;
        p_aux++;
        str1++;

    }
    *(p_aux) = '\0';

    int i = 0;
    while(str2[i] != 0){
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';

    while(*p_aux){

        *str2 = *p_aux;
        p_aux++;
        str2++;
    }
    *str2 = '\0';

}