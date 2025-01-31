#include <stdio.h>

int main(){
/*
     Jogo SUPER TRUNFO 

     TEMA: Países

     OBJETIVO: Cadastrar cartas representando cidades de diferentes estados, utilizando variáveis, operadores e funções de entrada e saída em C.
     
     Cada carta incluirá informações:

     País - Estado - Código da carta - Nome da cidade - População - PIB - Área - Quantidade de pontos turísticos - Densidade populacional - PIB per capita
    
*/
    #define total_estado 8
    #define cidade_por_estado 4

    char codigo[4]; // código da carta (ex: A01, B02, etc.)
    char estados[total_estado] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    printf("Registre o codigo dessa carta: \n"); 
    scanf("%i", &codigo);
    
    printf("Agora vamos cadastrar as informações dessa carta\n");

    char pais [10];

    printf("Qual o nome do país a ser atribuido para a carta? \n");
    scanf("%s", &pais [10]);

    char estado, cidade [15];
    int populacao, Pturistico;
    float area, PIB, PIBpercapita, densidadepopulacional;

    printf("Diga um Estado desse país: \n");
    scanf("%s", &estado);

    printf("Agora, uma Cidade desse estado: \n");
    scanf("%s", &cidade);

    printf("Agora gostaria que voçê me falasse a população geral dessa cidade: \n");
    scanf("%d", &populacao);

    printf("Agora, qual o numero de pontos turisticos dessa cidade: \n");
    scanf("%d", &Pturistico);

    printf("Poderia me informar a area dessa cidade: \n");
    scanf("%f", &area);

    printf("Agora qual o PIB dessa cidade: \n");
    scanf("%f", &PIB);

    printf("Agora gostaria que voçê me falasse o PIB per capita dessa cidade: \n");
    scanf("%f", &PIBpercapita);

    printf("Por fim, gostaria que voçê me falasse a densidade populacional dessa cidade: \n");
    scanf("%d", &densidadepopulacional);

    printf("Parabens, as informações da carta foram cadastradas com sucesso\n");

    
    return 0;
}
