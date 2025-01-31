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

    printf("\nAgora gostaria que você me falasse o PIB per capita dessa cidade: \n");
    scanf("%f", &PIBpercapita);

    printf("\nPor fim, gostaria que você me falasse a densidade populacional dessa cidade: \n");
    scanf("%f", &densidadepopulacional);

    printf("PIB per capita: %.2f\n", PIBpercapita);
    printf("Densidade populacional: %.2f\n", densidadepopulacional);


    return 0;

}