#include <stdio.h>

int main() {

    float nota1, nota2, nota3;
    float media;

    printf("digite a primeira nota: ");
    scanf("%.0f", &nota1);

    printf("digite a segunda nota: ");
    scanf("%.0f", &nota2);

    printf("digite a terceira nota: ");
    scanf("%.0f", &nota3);

    media = (nota1 + nota2 + nota3  /3);

    if (&media >= 7){
        printf("aluno aprovado com media: %.2f", media);
    } else {
        printf("aluno reprovado com media: %.2f", media);
    }
    return 0;
}