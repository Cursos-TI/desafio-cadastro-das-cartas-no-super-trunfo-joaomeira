#include <stdio.h>

/*
? Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:


Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
População: O número de habitantes da cidade. Tipo: int
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
PIB: O Produto Interno Bruto da cidade. Tipo: float
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. Por exemplo:
 
* Carta 1:

Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

* Carta 2:

Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    

Requisitos funcionais

O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
O programa deve armazenar os dados lidos em variáveis apropriadas.
O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

Requisitos não funcionais

Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.

Simplificações para o desafio

Você só precisa implementar o cadastro e a exibição de duas cartas.
Neste nível, foque apenas na leitura, armazenamento e exibição das informações. Você não precisa implementar nenhuma lógica de comparação entre as cartas ou qualquer outro recurso adicional.
Não utilize estruturas de repetição (como for ou while) ou estruturas de decisão (como if ou else). Seu código deve ser uma sequência simples de instruções.
*/

int preencherCarta(char *estado,char codigoCarta[4],char nomeCidade[20],int *numeroHabitantes,int *numeroPontosTuristicos,float *area,float *pib)
{
    

    return 0;
}

int main()
{
    /* Declarando variaveis */

    // LIMITE
    int CARTAS_MAX = 2;                 // Quantidade de cartas

    // Chars
    char    estado[CARTAS_MAX],                     // Estado
            codigoCarta[CARTAS_MAX][4],             // Codigo da Carta
            nomeCidade[CARTAS_MAX][20];             // Nome da cidade

    // Ints
    int     numeroHabitantes[CARTAS_MAX],           // Numedo de habitantes
            numeroPontosTuristicos[CARTAS_MAX];     // Numero de pontos turisticos

    // Floats
    float   area[CARTAS_MAX],                       // Area da cidade
            pib[CARTAS_MAX];                        // Pib da cidade

    
    /* Entrada de dados */

    /* CARTA 01*/
    printf("\nPreenchendo dados da CARTA 01\n\n");

    // Entrada do estado LETRA
    printf("Informe o estado, apenas com letras de A até H (Utilizar Somente maiúculo!): \n");
    scanf(" %c", &estado[0]); // Espaço antes do %c para não pegar buffer do enter, se não sai 2 mensagens.

    // Entrada do codigo da carta
    printf("Informe o codigo da carta, lembre-se inicia com a letra do estado em MAIÚSCULO seguido de 2 numeros de 01 até 04:\n");
    scanf(" %s", codigoCarta[0]); // Espaço antes do %s para não pegar buffer do enter, se não sai 2 mensagens.

    // Entrada nome da cidade (Sem tratamento de erros)
    printf("Nome da cidade sem ESPAÇOS: ");
    scanf(" %s", nomeCidade[0]);

    // Entrada numero da população (Sem tratamento de erros)
    printf("Número da população sem VIRGULAS!: ");
    scanf("%d", &numeroHabitantes[0]);

    // Entrada area da cidade em m2 (Sem tratamento de erros)
    printf("Numero da área em m² da cidade: ");
    scanf("%f", &area[0]);

    // Entrada PIB da cidade
    printf("Numero do PIB da cidade: ");
    scanf("%f", &pib[0]);

    // Entrada do número de pontos turisticos da cidade
    printf("Número de pontos turisticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos[0]);

    // ---------------------------------------------------------------------------------------

    /* CARTA 02*/
    printf("\nPreenchendo dados da CARTA 02\n\n");
    
    // Entrada do estado LETRA
    printf("Informe o estado, apenas com letras de A até H (Utilizar Somente maiúculo!): \n");
    scanf(" %c", &estado[1]); // Espaço antes do %c para não pegar buffer do enter, se não sai 2 mensagens.

    // Entrada do codigo da carta
    printf("Informe o codigo da carta, lembre-se inicia com a letra do estado em MAIÚSCULO seguido de 2 numeros de 01 até 04:\n");
    scanf(" %s", codigoCarta[1]); // Espaço antes do %s para não pegar buffer do enter, se não sai 2 mensagens.

    // Entrada nome da cidade (Sem tratamento de erros)
    printf("Nome da cidade sem ESPAÇOS: ");
    scanf(" %s", nomeCidade[1]);

    // Entrada numero da população (Sem tratamento de erros)
    printf("Número da população sem VIRGULAS!: ");
    scanf("%d", &numeroHabitantes[1]);

    // Entrada area da cidade em m2 (Sem tratamento de erros)
    printf("Numero da área em m² da cidade: ");
    scanf("%f", &area[1]);

    // Entrada PIB da cidade
    printf("Numero do PIB da cidade: ");
    scanf("%f", &pib[1]);

    // Entrada do número de pontos turisticos da cidade
    printf("Número de pontos turisticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos[1]);

    // -----------------------------------------------------------------------------------------------

    // Imprimindo resultados conforme pedido

    printf("\nCarta %d:\n",1);
    printf("Estado: %c\n", estado[0]);
    printf("Código: %s\n", codigoCarta[0]);
    printf("Nome da cidade: %s\n", nomeCidade[0]);
    printf("População: %d\n", numeroHabitantes[0]);
    printf("Área: %.2f km²\n", area[0]);
    printf("PIB: %.2f bilhões de reais\n", pib[0]);
    printf("Número de pontos turisticos: %d\n", numeroPontosTuristicos[0]);

    printf("\nCarta %d:\n",2);
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigoCarta[1]);
    printf("Nome da cidade: %s\n", nomeCidade[1]);
    printf("População: %d\n", numeroHabitantes[1]);
    printf("Área: %.2f km²\n", area[1]);
    printf("PIB: %.2f bilhões de reais\n", pib[1]);
    printf("Número de pontos turisticos: %d\n", numeroPontosTuristicos[1]);
    
    
    return 0;
}
