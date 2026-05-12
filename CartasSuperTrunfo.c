#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
};

void lerCarta(struct CartaSuperTrunfo *carta) {

    printf("\nDigite o estado (uma letra de A a H): ");
    scanf(" %c", &carta->estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta->cidade);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &carta->populacao);
}

int main() {

    struct CartaSuperTrunfo carta1, carta2;

    printf("=== Insira os dados da primeira carta ===\n");
    lerCarta(&carta1);

    printf("\n=== Insira os dados da segunda carta ===\n");
    lerCarta(&carta2);

    printf("\n\n=== Dados da primeira carta ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);

    printf("\n=== Dados da segunda carta ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);

    return 0;
}