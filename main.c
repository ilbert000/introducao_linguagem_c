#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float somatorioDasMedias;

    printf("digite a primeira nota: ");
    scanf("%f ", &nota1);

    printf("digite a segunda nota: ");
    scanf("%f \n", &nota2);

    printf("digite a terceira nota: ");
    scanf("%f \n", &nota3);

    somatorioDasMedias = ((nota1 + nota2 + nota3)  /3);

    if (somatorioDasMedias < 7){
        printf("\naluno reprovado com media: %.2f", somatorioDasMedias);
    } else {
        printf("\naluno aprovado com media: %.2f", somatorioDasMedias);
    }
    return 0;
}