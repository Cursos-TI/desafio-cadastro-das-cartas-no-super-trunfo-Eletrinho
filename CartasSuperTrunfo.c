#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char name_1[20] = "SerraVerde";
    int population_1 = 150500;
    float area_1 = 620.8;
    float density_1;
    float pib_1 = 3450000000;
    float per_capita_1;
    int turistic_1 = 10;

    char name_2[20] = "PortoVerde";
    int population_2 = 200000;
    float area_2 = 500.8;
    float density_2;
    float pib_2 = 5000000000;
    float per_capita_2;
    int turistic_2 = 10;

    // printf("Enter information of Card 1 \n");
    // printf("Name: ");
    // scanf("%s", &name_1);

    // printf("Population: ");
    // scanf("%d", &population_1);

    // printf("Area: ");
    // scanf("%f", &area_1);

    density_1 = population_1 / area_1;

    // printf("PIB: ");
    // scanf("%f", &pib_1);

    per_capita_1 = pib_1 / population_1;

    // printf("Turistic: ");
    // scanf("%d", &turistic_1);

    // printf("Enter information of Card 2 \n");
    // printf("Name: ");
    // scanf("%s", &name_2);

    // printf("Population: ");
    // scanf("%d", &population_2);

    // printf("Area: ");
    // scanf("%f", &area_2);

    density_2 = population_2 / area_2;

    // printf("PIB: ");
    // scanf("%f", &pib_2);

    per_capita_2 = pib_2 / population_2;

    // printf("Turistic: ");
    // scanf("%d", &turistic_2);

    printf("Enter a number of the attribute you will compare with: \n"
           "1 = Name || 2 = Population || 3 = Area || 4 = PIB || 5 = Turistic || 6 = Density || 7 = Per Capita \n");

    int option;
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        break;
    case 2:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        if (population_1 > population_2)
        {
            printf("Card 1 Won! \n");
        }
        else if (population_1 == population_2)
        {
            printf("It's a draw! \n");
        }
        else
        {
            printf("Card 2 Won! \n");
        }
        printf("Attribute used to compare: Population \n"
               "Population of Card 1: %d \n"
               "Population of Card 2: %d \n",
               population_1, population_2);
        break;
    case 3:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        if (area_1 > area_2)
        {
            printf("Card 1 Won! \n");
        }
        else if (area_1 == area_2)
        {
            printf("It's a draw! \n");
        }
        else
        {
            printf("Card 2 Won! \n");
        }
        printf(
            "Attribute used to compare: Area \n"
            "Area of Card 1: %.2f \n"
            "Area of Card 2: %.2f \n",
            area_1, area_2);
        break;
    case 4:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        if (pib_1 > pib_2)
        {
            printf("Card 1 Won! \n");
        }
        else if (pib_1 == pib_2)
        {
            printf("It's a draw! \n");
        }
        else
        {
            printf("Card 2 Won! \n");
        }
        printf(
            "Attribute used to compare: PIB \n"
            "PIB of Card 1: %.2f \n"
            "PIB of Card 2: %.2f \n",
            pib_1, pib_2);
        break;
    case 5:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        if (turistic_1 > turistic_2)
        {
            printf("Card 1 Won! \n");
        }
        else if (turistic_1 == turistic_2)
        {
            printf("It's a draw! \n");
        }
        else
        {
            printf("Card 2 Won! \n");
        }
        printf(
            "Attribute used to compare: Turistic \n"
            "Turistic of Card 1: %d \n"
            "Turistic of Card 2: %d \n",
            turistic_1, turistic_2);
        break;
    case 6:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        if (density_1 < density_2)
        {
            printf("Card 1 Won! \n");
        }
        else if (density_1 == density_2)
        {
            printf("It's a draw! \n");
        }
        else
        {
            printf("Card 2 Won! \n");
        }
        printf(
            "Attribute used to compare: Density \n"
            "Density of Card 1: %.2f \n"
            "Density of Card 2: %.2f \n",
            density_1, density_2);
        break;
    case 7:
        printf("Card 1 Country name: %s \n", name_1);
        printf("Card 2 Country name: %s \n", name_2);
        if (per_capita_1 > per_capita_2)
        {
            printf("Card 1 Won! \n");
        }
        else if (per_capita_1 == per_capita_2)
        {
            printf("It's a draw! \n");
        }
        else
        {
            printf("Card 2 Won! \n");
        }
        printf(
            "Attribute used to compare: Per Capita \n"
            "Per Capita of Card 1: %.2f \n"
            "Per Capita of Card 2: %.2f \n",
            per_capita_1, per_capita_2);
        break;
    default:
        printf("Invalid option! \n Try again! \n");
    }

    return 0;
}
