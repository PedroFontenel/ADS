#include <stdio.h>
#include <stdbool.h>

#define TOTAL_ESTADOS 8
#define CIDADES_POR_ESTADO 4

typedef struct {
    char codigo[4];      // Código da carta (ex: A01, B02, etc.)
    char pais[15];       // Nome do país
    char estado[15];     // Nome do estado
    char cidade[15];     // Nome da cidade
    int populacao;       // População da cidade
    float area;          // Área da cidade
    float PIB;           // PIB da cidade
    int Pturistico;      // Número de pontos turísticos
} Carta;

void cadastrarCarta(Carta *carta) {
    printf("\nRegistre o código dessa carta: \n"); 
    scanf("%s", carta->codigo);

    printf("\nQual o nome do país a ser atribuído para a carta? \n");
    scanf("%s", carta->pais);

    printf("\nDiga um Estado desse país: \n");
    scanf("%s", carta->estado);

    printf("\nAgora, uma Cidade desse estado: \n");
    scanf("%s", carta->cidade);

    printf("\nAgora gostaria que você me falasse a população geral dessa cidade: \n");
    scanf("%d", &carta->populacao);

    printf("\nPoderia me informar a área dessa cidade: \n");
    scanf("%f", &carta->area);

    printf("\nAgora qual o PIB dessa cidade: \n");
    scanf("%f", &carta->PIB);

    printf("\nAgora, qual o número de pontos turísticos dessa cidade: \n");
    scanf("%d", &carta->Pturistico);

    printf("\nParabéns, as informações da carta foram cadastradas com sucesso!\n");
}

void exibirCarta(const Carta *carta) {
    printf("\nResumo das informações cadastradas:\n");
    printf("Código da carta: %s\n", carta->codigo);
    printf("País: %s\n", carta->pais);
    printf("Estado: %s\n", carta->estado);
    printf("Cidade: %s\n", carta->cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f\n", carta->PIB);
    printf("Pontos turísticos: %d\n", carta->Pturistico);
}

int main() {
    Carta cartas[TOTAL_ESTADOS * CIDADES_POR_ESTADO];
    int quantidadeCartas = 0;
    char continuar = 's';

    printf("***Jogo SUPER TRUNFO***\n");

    while (continuar == 's' || continuar == 'S') {
        cadastrarCarta(&cartas[quantidadeCartas]);
        exibirCarta(&cartas[quantidadeCartas]);
        quantidadeCartas++;

        // Pergunta ao usuário se deseja cadastrar outra carta
        printf("\nDeseja cadastrar outra carta? (s/n): ");
        scanf(" %c", &continuar);  // Espaço antes de %c para ignorar o newline
    }

    printf("Cadastro finalizado. Obrigado por usar o sistema!\n");

    return 0;
}
