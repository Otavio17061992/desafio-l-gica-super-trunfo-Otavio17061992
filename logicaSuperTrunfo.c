#include <stdio.h>
#include <string.h>

// Estrutura de carta de País
struct Carta
{
    char nomeEstado[30];
    int populacao;
    float area;
    int pib;
    int codigoEstado;
    int densidadeDemografica;
    int pontosTuristicos;
};

// funcção que retorna o valor de atributo escolhido pelo usuario
float AtributoValorEscolhido(struct Carta carta, int op)
{
    switch (op)
    {
    case 1:
        return carta.populacao;
    case 2:
        return carta.area;
    case 3:
        return carta.pib;
    case 4:
        return carta.codigoEstado;
    case 5:
        return carta.densidadeDemografica;
    case 6:
        return carta.pontosTuristicos;
    default:
        return -1; // caso informado opção invalida
    }
}
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() 
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    struct Carta pais1 = {"Brasil", 214000000, 8515767.0, 1.92, 27, 25.1, 50};
    struct Carta pais2 = {"Paraguai", 45810000, 2780400.0, 0.456, 23, 16.5, 35};

    int atributo1, atributo2;


    printf("====== SUPER TRUNFO ======\n");
    printf("Vamos Comparar: %s VS %s\n\n", pais1.nomeEstado, pais2.nomeEstado);


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    // Escolhe o primeiro atributo
    printf("ESCOLHA O PRIMEIRO ATRIBUTO:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Codigo do Estado\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - Pontos Turisticos\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &atributo1);

    printf("\nESCOLHA O SEGUNDO ATRIBUTO:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Codigo do Estado\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - Pontos Turisticos\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &atributo2);

    // Pega os valores dos atributos escolhidos
    float valor1_atrib1 = AtributoValorEscolhido(pais1, atributo1);
    float valor2_atrib1 = AtributoValorEscolhido(pais2, atributo1);
    float valor1_atrib2 = AtributoValorEscolhido(pais1, atributo2);
    float valor2_atrib2 = AtributoValorEscolhido(pais2, atributo2);

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("\n=== COMPARACAO DO PRIMEIRO ATRIBUTO ===\n");
    printf("Atributo: ");
    switch(atributo1) 
    {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Codigo do Estado\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("Pontos Turisticos\n"); break;
    }
    
    printf("%s: %.2f\n", pais1.nomeEstado, valor1_atrib1);
    printf("%s: %.2f\n", pais2.nomeEstado, valor2_atrib1);

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if(atributo1 == 5) 
    { 
        if(valor1_atrib1 < valor2_atrib1) 
        {
            printf("Vencedor: %s\n", pais1.nomeEstado);
        } 
        else if(valor2_atrib1 < valor1_atrib1) 
        {
            printf("Vencedor: %s\n", pais2.nomeEstado);
        } 
        else 
        {
            printf("Empate!\n");
        }
    } 
    else 
    { 
        if(valor1_atrib1 > valor2_atrib1) 
        {
            printf("Vencedor: %s\n", pais1.nomeEstado);
        } 
        else if(valor2_atrib1 > valor1_atrib1) 
        {
            printf("Vencedor: %s\n", pais2.nomeEstado);
        } 
        else 
        {
            printf("Empate!\n");
        }
    }

    // Comparação do segundo atributo
    printf("\n=== COMPARACAO DO SEGUNDO ATRIBUTO ===\n");
    printf("Atributo: ");
    switch(atributo2) 
    {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Codigo do Estado\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("Pontos Turisticos\n"); break;
    }
    
    printf("%s: %.2f\n", pais1.nomeEstado, valor1_atrib2);
    printf("%s: %.2f\n", pais2.nomeEstado, valor2_atrib2);


    if(atributo2 == 5) 
    { 
        if(valor1_atrib2 < valor2_atrib2) 
        {
            printf("Vencedor: %s\n", pais1.nomeEstado);
        } 
        else if(valor2_atrib2 < valor1_atrib2) 
        {
            printf("Vencedor: %s\n", pais2.nomeEstado);
        } 
        else 
        {
            printf("Empate!\n");
        }
    } 
    else 
    { 
        if(valor1_atrib2 > valor2_atrib2)
        {
            printf("Vencedor: %s\n", pais1.nomeEstado);
        } 
        else if(valor2_atrib2 > valor1_atrib2) 
        {
            printf("Vencedor: %s\n", pais2.nomeEstado);
        } 
        else 
        {
            printf("Empate!\n");
        }
    }

    // Soma dos atributos para resultado final
    float soma_pais1 = valor1_atrib1 + valor1_atrib2;
    float soma_pais2 = valor2_atrib1 + valor2_atrib2;

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n=== RESULTADO FINAL ===\n");
    printf("Soma dos atributos de %s: %.2f\n", pais1.nomeEstado, soma_pais1);
    printf("Soma dos atributos de %s: %.2f\n", pais2.nomeEstado, soma_pais2);
    
    if(soma_pais1 > soma_pais2) 
    {
        printf("\nVENCEDOR FINAL: %s!\n", pais1.nomeEstado);
    }
    else if(soma_pais2 > soma_pais1) 
    {
        printf("\nVENCEDOR FINAL: %s!\n", pais2.nomeEstado);
    } 
    else 
    {
        printf("\nEMPATE FINAL!\n");
    }
    return 0;
}
