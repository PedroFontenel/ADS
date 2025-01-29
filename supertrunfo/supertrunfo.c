#include <stdio.h>

int main(){
/*
     Jogo SUPER TRUNFO (TechNova)

     TEMA: Países

     OBJETIVO: Cadastrar cartas representando cidades de diferentes estados, utilizando variáveis, operadores e funções de entrada e saída em C.
     
     Cada carta incluirá informações:

     - Estado - Código da carta - Nome da cidade - População - PIB - Área - Quantidade de pontos turísticos - Densidade populacional - PIB per capita
    
     */

    char país [15];
    int codigo; // do 1 ao 4

    printf("Qual o nome do país a ser atribuido para a carta? \n");
    scanf("%s", &país);

    printf("Registre o codigo dessa carta: \n"); 
    scanf("%d", &codigo);

    printf("Parabens, carta cadastrada com sucesso \n Codígo da carta: %d\n", codigo);

    printf("Agora vamos cadastrar as informações dessa carta\n");

    char estado, cidade [15];

    printf("Diga um estado desse país: \n");
    scanf("%s", &estado);

    printf("Agora, uma cidade desse estado: \n");
    scanf("%s", &cidade);

    int populacao, Pturistico;
    float area, PIB, PIBpercapita, densidadepopulacional;

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

    printf("Parabens, as informações dessa carta foram cadastradas com sucesso, seu codigo é: %i\n", codigo);

    printf("País: %s\n", país);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos turistícos: %d\n", Pturistico);
    printf("PIB: %f\n", PIB);
    printf("PIB per capita: %f\n", PIBpercapita);
    printf("Densidade populacional: %d\n", densidadepopulacional);

    return 0;
}
