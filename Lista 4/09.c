#include <stdio.h>

int hora_segundos(int horas, int minutos, int segundos) {
    int total_segundos;

    total_segundos = horas * 3600 + minutos * 60 + segundos;

    return total_segundos;
}

int main() {
    int horas, minutos, segundos;
    int segundos_total;

    printf("Digite a hora no formato HH:MM:SS\n");
    printf("Horas: ");
    scanf("%d", &horas);
    printf("Minutos: ");
    scanf("%d", &minutos);
    printf("Segundos: ");
    scanf("%d", &segundos);
    
    segundos_total = hora_segundos(horas, minutos, segundos);

    printf("\n%d horas, %d minutos e %d segundos correspondem a %d segundos.\n", horas, minutos, segundos, segundos_total);

    return 0;
}
