#include <stdio.h>

/*
? Calculando Densidade Populacional e PIB per Capita
No nível básico, você criou um sistema para cadastrar as cartas do Super Trunfo. Agora, vamos adicionar mais detalhes e complexidade ao nosso jogo! Neste nível, você implementará a lógica para calcular e exibir duas novas propriedades importantes para cada cidade: a densidade populacional e o PIB per capita.

O que você vai fazer
Aprimore o programa em C que você criou no nível básico. O programa continuará lendo as mesmas informações do usuário (estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos) para duas cartas. A diferença é que, agora, seu programa também deve:

* Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
* Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
* Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.

! Exemplo de Saída:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais

! Requisitos funcionais
* Manter as funcionalidades do nível básico (leitura e exibição dos dados das cartas).
* Calcular e exibir corretamente a densidade populacional e o PIB per capita para cada cidade.

! Requisitos não funcionais
* Manter os requisitos não funcionais do nível básico (usabilidade, legibilidade, corretude).
* Eficiência: O programa deve realizar os cálculos de forma eficiente.

! Simplificações para o nível intermediário
* Você ainda só precisa lidar com duas cartas.
* Continue sem usar estruturas de repetição (for, while) ou estruturas de decisão (if, else).
*/

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
            pib[CARTAS_MAX],                        // Pib da cidade
            // Adicionais deste ex
            densidade[CARTAS_MAX],                  // Densidade da população
            pibPerCapta[CARTAS_MAX];                // PIB per capta

    
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
    printf("Numero da área em km² da cidade: ");
    scanf("%f", &area[0]);

    // Entrada PIB da cidade
    printf("Numero do PIB da cidade em bilhão(oes): ");
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
    printf("Numero da área em Km² da cidade: ");
    scanf("%f", &area[1]);

    // Entrada PIB da cidade
    printf("Numero do PIB da cidade em bilhão(oes): ");
    scanf("%f", &pib[1]);

    // Entrada do número de pontos turisticos da cidade
    printf("Número de pontos turisticos da cidade: ");
    scanf("%d", &numeroPontosTuristicos[1]);

    // -----------------------------------------------------------------------------------------------

    /* Realizando os calculos da densidade e pib per capta*/

    // Calculo da densidade
    densidade[0] = (float) numeroHabitantes[0] / area[0];
    densidade[1] = (float) numeroHabitantes[1] / area[1];

    // Calculo do PIB perCapta | Bilhão = 1000000000 
    pibPerCapta[0] = (pib[0] * 1000000000) / (float) numeroHabitantes[0];
    pibPerCapta[1] = (pib[1] * 1000000000) / (float) numeroHabitantes[1];


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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade[0]);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta[0]);


    printf("\nCarta %d:\n",2);
    printf("Estado: %c\n", estado[1]);
    printf("Código: %s\n", codigoCarta[1]);
    printf("Nome da cidade: %s\n", nomeCidade[1]);
    printf("População: %d\n", numeroHabitantes[1]);
    printf("Área: %.2f km²\n", area[1]);
    printf("PIB: %.2f bilhões de reais\n", pib[1]);
    printf("Número de pontos turisticos: %d\n", numeroPontosTuristicos[1]);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade[1]);
    printf("PIB per Capita: %.2f reais\n", pibPerCapta[1]);
    
    
    
    return 0;
}
