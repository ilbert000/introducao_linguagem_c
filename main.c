#include <stdio.h>

int main() {
    // variaveis para as notas e o somatorio das medias

    float nota1, nota2, nota3;
    float somatorioDasMedias;

    // entrada das notas

    printf("digite a primeira nota: ");
    while (scanf("%f", &nota1) != 1 || nota1 < 0 || nota1 > 10) {
        printf("entrada invalida\n");
        printf("tente novamente\n");
        printf("digite a primeira nota: ");
    }

    printf("digite a segunda nota: ");
    while (scanf("%f", &nota2) != 1 || nota2 < 0 || nota2 > 10) {
        printf("entrada invalida\n");
        printf("tente novamente\n");
        printf("digite a segunda nota: ");
    }
    printf("digite a terceira nota: ");
    while (scanf("%f", &nota3) != 1 || nota3 < 0 || nota3 > 10) {
        printf("entrada invalida\n");
        printf("tente novamente\n");
        printf("digite a terceira nota: ");
    }

    // calculo do somatorio das medias

    somatorioDasMedias = ((nota1 + nota2 + nota3)  /3);

    if (somatorioDasMedias < 7){
        printf("\naluno reprovado com media: %.2f", somatorioDasMedias);
    } else {
        printf("\naluno aprovado com media: %.2f", somatorioDasMedias);
    }
    return 0;
}

//professor não é IA eu só sei bastante de logica de programação, pelo amor do pai, Deus eu tenho medo, não zera professor