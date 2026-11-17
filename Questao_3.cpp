#include <stdio.h>

int main() {

    int num, temp, digito;
    int qtdAlgarismos = 0;
    int somaAlgarismos = 0;
    int invertido = 0;
    int acumulador = 0;
    int i, auxInvertido, algarismoAtual;

    do {
        printf("Digite um numero inteiro positivo entre 10 e 500: ");
        scanf("%d", &num);

        if (num < 10 || num > 500) {
            printf("Valor invalido! Tente novamente.\n\n");
        }
    } while (num < 10 || num > 500);

    temp = num;
    while (temp > 0) {
        digito = temp % 10;
        qtdAlgarismos++;
        somaAlgarismos += digito;
        invertido = (invertido * 10) + digito;
        temp /= 10;
    }

    auxInvertido = invertido;
    for (i = 1; i <= qtdAlgarismos; i++) {

        algarismoAtual = auxInvertido % 10;
        auxInvertido /= 10;

        if (i % 2 == 0) {
            acumulador *= i;
        } else {
            acumulador += i;
        }

        if (acumulador % 3 == 0) {
            acumulador -= algarismoAtual;
        }

        if (acumulador < 0) {
            acumulador = -acumulador;
        }
    }

    printf("\n=== RESULTADOS ===\n");
    printf("Quantidade de algarismos: %d\n", qtdAlgarismos);
    printf("Soma dos algarismos: %d\n", somaAlgarismos);
    printf("Numero invertido: %d\n", invertido);
    printf("Valor final do acumulador: %d\n", acumulador);

    return 0;
}

