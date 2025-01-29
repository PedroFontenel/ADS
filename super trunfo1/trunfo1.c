#include <stdio.h>

int main (){

    char pais[15];
    int codigo; // do 1 ao 4

    printf("Qual o nome do país a ser atribuido para a carta? \n");
    scanf("%s", &pais [10]);

    printf("Registre o codigo dessa carta: \n"); 
    scanf("%i", &codigo);

    printf("Seu codigo é: %i\n", codigo);

printf("Parabens, carta cadastrada com sucesso \n Codígo da carta: %i\n", codigo);

    printf("Seu codigo é: %i\n", codigo);
    printf("País: %s\n", pais);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Pontos turistícos: %d\n", Pturistico);
    printf("Area: %f\n km²", area);
    printf("PIB: %f\n", PIB);
    printf("PIB per capita: %f\n", PIBpercapita);
    printf("Densidade populacional: %d\n", densidadepopulacional);

    printf("Seu codigo é: %i\nPaís: %s\nEstado: %s\nCidade: %s\n", codigo, pais, estado, cidade);
    printf("População: %d\nPontos turistícos: %d\nArea: %f\n km²", populacao, Pturistico, area);
    printf("PIB: %f\n", PIB);
    printf("PIB per capita: %f\n", PIBpercapita);
    printf("Densidade populacional: %d\n", densidadepopulacional);


    return 0;

}