#include <stdio.h>
#include <string.h>

int main() {
    char nome[11];  // Para armazenar o nome do estudante (máximo de 10 letras + 1 para o terminador)
    float P1, P2, exameNormal, exameRecurso;
    int faltas, avaliacoesContinuas;
    float media;

    // Leitura do nome do estudante
    printf("Digite o nome do estudante (máx. 10 letras): ");
    scanf("%10s", nome);

    // Leitura das notas e parâmetros
    printf("Digite a nota da P1: ");
    scanf("%f", &P1);
    printf("Digite a nota da P2: ");
    scanf("%f", &P2);
    printf("Digite a nota do Exame Normal: ");
    scanf("%f", &exameNormal);
    printf("Digite a nota do Exame de Recurso: ");
    scanf("%f", &exameRecurso);

    printf("Digite o somatório de faltas: ");
    scanf("%d", &faltas);
    printf("Digite as avaliações contínuas: ");
    scanf("%d", &avaliacoesContinuas);

    // Cálculo da média das notas
    media = (P1 + P2 + exameNormal) / 3;

    // Exibindo todas as notas
    printf("Notas de %s:\n", nome);
    printf("P1: %.2f\n", P1);
    printf("P2: %.2f\n", P2);
    printf("Exame Normal: %.2f\n", exameNormal);
    printf("Exame de Recurso: %.2f\n", exameRecurso);
    printf("Faltas: %d\n", faltas);
    printf("Avaliações contínuas: %d\n", avaliacoesContinuas);
    printf("Média: %.2f\n", media);

    // Avaliação das condições
    if (media > 15) {
        printf("Dispensa do Exame na secção A.\n");
    } else if (media == 14) {
        if (avaliacoesContinuas > 1) {
            printf("Dispensa do Exame na secção B.\n");
        } else {
            printf("Não obtém dispensa do Exame na secção B.\n");
        }
    } else if (media < 14 && media >= 10) {
        if (faltas < 15) {
            printf("Inscrito para o exame.\n");
        } else {
            printf("Vai para o recurso direto.\n");
        }
    } else if (media < 10 && media > 6) {
        if (faltas < 6) {
            printf("Vai para o recurso.\n");
        } else {
            printf("Vai para o recurso direto.\n");
        }
    } else if (media <= 6 && faltas == 0 && avaliacoesContinuas > 1) {
        printf("Vai para o recurso.\n");
    } else {
        printf("É do Real Madrid, 4.\n");  // Reprovado
    }

    return 0;
}
