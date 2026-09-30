Questão 4 - Meta de 10.000 passos
#include <stdio.h>

int main() {

    int passos, total = 0, horas = 0;

    while (total < 10000) {

        printf("Digite os passos da hora: ");
        scanf("%d", &passos);

        total = total + passos;
        horas++;
    }

    printf("Total de passos: %d\n", total);
    printf("Foram necessarias %d horas.\n", horas);

    return 0;
}