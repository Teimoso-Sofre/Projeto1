#include <stdio.h>

int main() {
    char c;

    // Leitura do caractere

    printf("Digite um caractere: ");
    scanf("%c", &c);

    // Verificação se é uma letra

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        if (c >= 'A' && c <= 'Z') {
            printf("'%c' é uma letra maiúscula.\n", c);
        } else {
            printf("'%c' é uma letra minúscula.\n", c);
        }
    } else {
        printf("'%c' não é uma letra do alfabeto.\n", c);
    }

    return 0;
}
