#include <stdio.h>

int main(){
/*
     Jogo SUPER TRUNFO (TechNova)

     TEMA: Países

     OBJETIVO: Cadastrar cartas representando cidades de diferentes estados, utilizando variáveis, operadores e funções de entrada e saída em C.
     
     Cada carta incluirá informações:

     País - Estado - Código da carta - Nome da cidade - População - PIB - Área - Quantidade de pontos turísticos - Densidade populacional - PIB per capita
    
*/

    char pais [10];
    int codigo; // do 1 ao 4

    printf("Qual o nome do país a ser atribuido para a carta? \n");
    scanf("%s", &pais [10]);

    printf("Registre o codigo dessa carta: \n"); 
    scanf("%i", &codigo);

    printf("Parabens, carta cadastrada com sucesso \n Codígo da carta: %i\n", codigo);

    printf("Agora vamos cadastrar as informações dessa carta\n");

    char estado, cidade [15];
    int populacao, Pturistico;
    float area, PIB, PIBpercapita, densidadepopulacional;

    printf("Diga um estado desse país: \n");
    scanf("%s", &estado);

    printf("Agora, uma cidade desse estado: \n");
    scanf("%s", &cidade);

    printf("Agora gostaria que voçê me falasse a população geral dessa cidade: \n");
    scanf("%d", &populacao);

    printf("Agoro, qual o numero de pontos turisticos dessa cidade: \n");
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
