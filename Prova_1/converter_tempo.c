#include <stdio.h>

void converter_tempo(int total, int *horas, int *minutos, int *segundos);

int main() {
    int seg = 3665, a,  b, c;
    int *p_horas = &a, *p_minutos = &b, *p_segundos = &c;
    converter_tempo(seg, p_horas, p_minutos, p_segundos);
    printf("Horas = %d, Minutos = %d, segundos = %d", a, b, c);
    
    return 0;
}

void converter_tempo(int total, int *horas, int *minutos, int *segundos){
    //descobrir horas
    *horas = total / 3600;
    *minutos = (total % 3600) / 60;
    *segundos = (total % 3600) % 60;
    
}
