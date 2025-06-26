#include <stdio.h>

/*
! Batalha de Cartas no Super Trunfo
Prepare-se para o desafio final! Agora que você já sabe cadastrar cartas e calcular atributos importantes, é hora de colocar suas cartas para lutar! Neste nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder". Prepare-se para usar todo o seu conhecimento de operadores relacionais, modificadores de tipo e conversão de tipos em C!

? O que você vai fazer
Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser armazenada como unsigned long int para acomodar números maiores. As demais informações permanecem com os mesmos tipos. Após a leitura dos dados, seu programa deverá:

* Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.
* Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
        ! Não faz sentido nenhum somar o inverso de densidade, qunado menor "maior" o poder... Entre milhoes o que vai ser qualquer numero menor que 1?
* Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
* Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).

? Exemplo de Saída (após a entrada dos dados):
Comparação de Cartas:
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)

! Requisitos funcionais
* Manter as funcionalidades dos níveis básico e intermediário (leitura, cálculo e exibição dos dados das cartas, incluindo densidade populacional e PIB per capita).
* Calcular corretamente o Super Poder para cada carta.
* Comparar corretamente as cartas atributo por atributo, considerando a regra específica para densidade populacional.
* Exibir os resultados das comparações de forma clara e organizada.

! Requisitos não funcionais
Manter os requisitos não funcionais dos níveis anteriores (usabilidade, legibilidade, corretude, eficiência).
*/

int main()
{
        /* Declarando variaveis */
        
        // LIMITE
        int CARTAS_MAX = 2;                             // Quantidade de cartas
        
        // Chars
        char    estado[CARTAS_MAX],                     // Estado
        codigoCarta[CARTAS_MAX][4],                     // Codigo da Carta
        nomeCidade[CARTAS_MAX][20];                     // Nome da cidade
        
        // Ints
        unsigned int numeroHabitantes[CARTAS_MAX];      // Numedo de habitantes
        int numeroPontosTuristicos[CARTAS_MAX];         // Numero de pontos turisticos
        
        // Floats
        float   area[CARTAS_MAX],                       // Area da cidade
        pib[CARTAS_MAX],                                // Pib da cidade
        // Adicionais deste ex
        densidade[CARTAS_MAX],                          // Densidade da população
        pibPerCapta[CARTAS_MAX],                        // PIB per capta
        superPoder[CARTAS_MAX];                         // Super Poder soma de pop, area, PIB, PIB per capta e densidade pop invertida para comp e numeros de pontos turisticos.
        
        
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
        scanf("%u", &numeroHabitantes[0]);
        
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
        scanf("%u", &numeroHabitantes[1]);
        
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
        
        // Calculo super poder 
        superPoder[0] = (float) numeroHabitantes[0] + area[0] + pib[0] + (float) numeroPontosTuristicos[0] + pibPerCapta[0] + (1.0 / densidade[0]);
        superPoder[1] = (float) numeroHabitantes[1] + area[1] + pib[1] + (float) numeroPontosTuristicos[1] + pibPerCapta[1] + (1.0 / densidade[1]);
        
        // -----------------------------------------------------------------------------------------------
        
        // Imprimindo resultados conforme pedido
        
        // Carta 1

        printf("\nCarta %d\n",1);
        printf("Estado                          : %c\n", estado[0]);
        printf("Código                          : %s\n", codigoCarta[0]);
        printf("Nome da cidade                  : %s\n", nomeCidade[0]);
        printf("População                       : %u\n", numeroHabitantes[0]);
        printf("Área                            : %.2f km²\n", area[0]);
        printf("PIB                             : %.2f bilhões de reais\n", pib[0]);
        printf("Número de pontos turisticos     : %d\n", numeroPontosTuristicos[0]);
        printf("Densidade Populacional          : %.2f hab/km²\n", densidade[0]);
        printf("PIB per Capita                  : %.2f reais\n", pibPerCapta[0]);
        printf("Super poder                     : %.2f\n", superPoder[0]);

        // Carta 2
        
        printf("\nCarta %d\n",2);
        printf("Estado                          : %c\n", estado[1]);
        printf("Código                          : %s\n", codigoCarta[1]);
        printf("Nome da cidade                  : %s\n", nomeCidade[1]);
        printf("População                       : %u\n", numeroHabitantes[1]);
        printf("Área                            : %.2f km²\n", area[1]);
        printf("PIB                             : %.2f bilhões de reais\n", pib[1]);
        printf("Número de pontos turisticos     : %d\n", numeroPontosTuristicos[1]);
        printf("Densidade Populacional          : %.2f hab/km²\n", densidade[1]);
        printf("PIB per Capita                  : %.2f reais\n", pibPerCapta[1]);
        printf("Super poder                     : %.2f\n", superPoder[1]);

        printf("\n\n");

        // Comparações 

        printf("Comparação de Cartas\n");
        printf("População               : Carta 1 venceu (%d)\n", (int) (numeroHabitantes[0] > numeroHabitantes[1]));
        printf("Área                    : Carta 1 venceu (%d)\n", (int) (area[0] > area[1]));
        printf("PIB                     : Carta 1 venceu (%d)\n", (int) (pib[0] > pib[1]));
        printf("Pontos Turísticos       : Carta 1 venceu (%d)\n", (int) (numeroPontosTuristicos[0] > numeroPontosTuristicos[1]));
        printf("Densidade Populacional  : Carta 2 venceu (%d)\n", (int) (densidade[0] > densidade [1]));
        printf("PIB per Capita          : Carta 1 venceu (%d)\n", (int) (pib[0] > pib[1]));
        printf("Super Poder             : Carta 1 venceu (%d)\n", (int) (superPoder[0] > superPoder[1]));
        
        return 0;
}
