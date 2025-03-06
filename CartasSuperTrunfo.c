#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
        /*Declaração das variaveis - Carta 1 */

        char est1[10] = "Ceara";
        char cod1[10] ="J01";
        char nome1[10] ="Pernambuco";
        int populacao1 = 32;
        float area1 = 12.21;
        float PIB1 = 12.45;
        int pontos1 = 34;
    
        /*Declaração das variaveis - Carta 2 */
    
        char est2[10] = "São Paulo";
        char cod2[10] ="J01";
        char nome2[10] ="São Paulo";
        int populacao2 = 23;
        float area2 = 23.555;
        float PIB2 = 43.5557;
        int pontos2 = 45;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /*Entrada de dados - Carta 1 */
        printf("Digite as informações da primeira carta!\n");

        printf ("Digite o nome do seu estado:\n");
        scanf ("%s", &est1);
    
        printf ("Digite o Código do seu estado:\n");
        scanf ("%s", cod1);
    
        printf ("Digite o nome da sua cidade:\n");
        scanf ("%s", nome1);
    
        printf ("Digite a população do seu estado:\n");
        scanf ("%d", &populacao1);
    
        printf ("Digite a Area em km do seu estado:\n");
        scanf ("%f", &area1);
    
        printf ("Digite o PIB do seu estado:\n");
        scanf ("%f", &PIB1);
    
        printf ("Digite quantos pontos turisticos tem nesse estado:\n");
        scanf ("%d", &pontos1);
    
    /*Entrada de dados - Carta 2 */

        printf("Digite as informações da segunda carta:\n");

        printf ("Digite o nome do seu estado:\n");
        scanf ("%s", &est2);

        printf ("Digite o Código do seu estado:\n");
        scanf ("%s", cod2);

        printf ("Digite o nome da sua cidade:\n");
        scanf ("%s", nome2);

        printf ("Digite a população do seu estado:\n");
        scanf ("%d", &populacao2);

        printf ("Digite a Area em km do seu estado:\n");
        scanf ("%f", &area2);

        printf ("Digite o PIB do seu estado:\n");
        scanf ("%f", &PIB2);

        printf ("Digite quantos pontos turisticos tem nesse estado:\n");
        scanf ("%d", &pontos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        /*Exibição da Carta 1 */

        printf("Carta 1\n");
        printf ("Estado:%s\n",est1);
        printf ("Código:%s\n", cod1);
        printf ("Nome da cidade:%s\n", nome1);
        printf ("População:%i\n", populacao1);
        printf ("Área:%f\n", area1);
        printf ("PIB:%f\n", PIB1);
        printf ("Pontos turisticos:%i\n", pontos1);

            /*Exibição da Carta 2 */


        printf("Carta 2\n");
        printf ("Estado:%s\n",est2);
        printf ("Código:%s\n", cod2);
        printf ("Nome da cidade:%s\n", nome2);
        printf ("População:%i\n", populacao2);
        printf ("Área:%f\n", area2);
        printf ("PIB:%f\n", PIB2);
        printf ("Pontos turisticos:%i\n", pontos2);

    return 0;
}
