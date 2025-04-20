#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    float densidade1, densidade2;
    float percapita1, percapita2;
    float poder1, poder2;

    int unidade1, unidade2;

    printf("Bem-vindo ao Super Trunfo!\n");

    // Cadastrar Carta 1
    printf("\nCarta 1:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código: ");
    scanf("%3s", codigo1);

    printf("Digite a cidade: ");
    scanf("%29s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB (valor numérico ex: 2.5): ");
    scanf("%f", &pib1);
    printf("Esse valor está em:\n1. Milhões\n2. Bilhões\n3. Trilhões\nEscolha: ");
    scanf("%d", &unidade1);

    printf("\n");

    if (unidade1 == 1) pib1 *= 1000000;
    else if (unidade1 == 2) pib1 *= 1000000000;
    else if (unidade1 == 3) pib1 *= 1000000000000;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &turismo1);

    // Cadastrar Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código: ");
    scanf("%3s", codigo2);

    printf("Digite a cidade: ");
    scanf("%29s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("\n");

    printf("Digite o PIB (valor numérico ex: 2.5): ");
    scanf("%f", &pib2);
    printf("Esse valor está em:\n1. Milhões\n2. Bilhões\n3. Trilhões\nEscolha: ");
    scanf("%d", &unidade2);

    if (unidade2 == 1) pib2 *= 1000000;
    else if (unidade2 == 2) pib2 *= 1000000000;
    else if (unidade2 == 3) pib2 *= 1000000000000;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &turismo2);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / (float)populacao1;
    poder1 = populacao1 + area1 + pib1 + turismo1 + percapita1 + (1 / densidade1);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / (float)populacao2;
    poder2 = populacao2 + area2 + pib2 + turismo2 + percapita2 + (1 / densidade2);


    // Impressão da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", poder1);

    // Impressão da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", poder2);

    // Menus que selecionam os atributos a serem comparado
    char* resultado1;
    char* resultado2;
    int unidade;

    int opcao;
    printf("\nSelecione o atributo a ser comparado:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");

    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n");

    printf("Primeira rodada:\n");

    int ponto1 = 0;
    int ponto2 = 0;

    switch (opcao) {
        case 1:
            printf("Voce escolheu a população\n");
            resultado1 = populacao1 > populacao2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
            break;
        case 2:
            printf("Voce escolheu a area\n");
            resultado1 = area1 > area2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
        break;
        case 3:
            printf("Voce escolheu o PIB\n");
            resultado1 = pib1 > pib2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
        break;
        case 4:
            printf("Voce escolheu os pontos turísticos\n");
            resultado1 = turismo1 > turismo2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
        break;
        case 5:
            printf("Voce escolheu a densidade populacional\n");
            resultado1 = densidade1 > densidade2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
        break;
        case 6:
            printf("Voce escolheu o PIB per capita\n");
            resultado1 = percapita1 > percapita2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
        break;
        case 7:
            printf("Voce escolheu o Super Poder\n");
            resultado1 = poder1 > poder2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
        break;
        default:
            printf("Opção inválida!\n");
            break;
        }

        printf("O resultado da primeira rodada é: %s\n", resultado1);

        // coletor de pontos
        if(resultado1[6] == '1') ponto1 ++;
        else if (resultado1[6] == '2') ponto2 ++;

        printf("\nSegunda rodada:\n");

        int opcao2;
        printf("Agora escolha o atributo a ser comparado:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super Poder\n");

        printf("Opção: ");
        scanf("%d", &opcao2);

        if (opcao2 == opcao) {
            printf("Voce escolheu o mesmo atributo!\n");
        } else {
            switch (opcao2) {
                case 1:
                    printf("Voce escolheu a população\n");
                    resultado2 = populacao1 > populacao2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
                    break;
                case 2:
                    printf("Voce escolheu a area\n");
                    resultado2 = area1 > area2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
                break;
                case 3:
                    printf("Voce escolheu o PIB\n");
                    resultado2 = pib1 > pib2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
                break;
                case 4:
                    printf("Voce escolheu os pontos turísticos\n");
                    resultado2 = turismo1 > turismo2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
                break;
                case 5:
                    printf("Voce escolheu a densidade populacional\n");
                    resultado2 = densidade1 > densidade2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
                break;
                case 6:
                    printf("Voce escolheu o PIB per capita\n");
                    resultado2 = percapita1 > percapita2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
                break;
                case 7:
                    printf("Voce escolheu o Super Poder\n");
                    resultado2 = poder1 > poder2 ? "Carta 1 vence rodada!" : "Carta 2 vence rodada!";
                break;
                default:
                    printf("Opção inválida!\n");
                    break;
        }

        printf("O resultado da segunda rodada é: %s\n", resultado2);

        if(resultado2[6] == '1') ponto1 ++;
        else if (resultado2[6] == '2') ponto2 ++;
        
            // pontuacao final
        printf("\nResultado Final:\n");

        if (ponto1 > ponto2) {
            printf("Carta 1 vence o jogo!");
        } else if (ponto1 < ponto2) {
            printf("Carta 2 vence o jogo!");
        } else {
            printf("O jogo empatou!");
        }
    }


}


    



    
