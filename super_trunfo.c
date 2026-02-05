#include <stdio.h>
#include <string.h> // Biblioteca par para strcspn

int main() {
    // Criando as variáveis para a Carta 1
    char codigo_carta_1[4]; // código único para a carta, coleta uma string de 3 caracteres, mais  finalizador do array
    char estado_carta_1[3]; // informando uma UF do país
    char cidade_carta_1[31]; // informando o nome de uma cidade
    int populacao_1; // número aproximado de habitantes, um inteiro
    float area_1; // área aproximada em KM2, um número decimal
    float pib_1; // PIB aproximado
    int pontos_turisticos_1; // quantos pontos turisticos o turista não deve deixar de visitar

    // Variáveis para a Carta 2
    char codigo_carta_2[4];
    char estado_carta_2[3];
    char cidade_carta_2[31];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turisticos_2;

    // Entrada de Dados - Carta 1, requisita cada dado e insere nas variáveis criadas
    printf("--- SUPER TRUNFO - Analise Sistemas S1 ---\n");
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta_1); //coleta em formato string
    printf("Estado (sigla): ");
    scanf("%s", estado_carta_1); 
    //Limpando o buffer antes do fgets
    getchar(); 
    printf("Nome da Cidade: ");
    fgets(cidade_carta_1, 31, stdin); //coleta caracteres inclusive espaço até vir um Enter
    cidade_carta_1[strcspn(cidade_carta_1, "\n")] = 0; // Remove o \n final do fgets
    printf("Populacao: ");
    scanf("%d", &populacao_1); //coleta um dado em formato int
    printf("Area (km2): ");
    scanf("%f", &area_1); //coleta um dado em formato float
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib_1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_1);
    printf("\n"); //linha em branco para melhor visualização

    // Entrada de Dados - Carta 2
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo_carta_2);
    printf("Estado (sigla): ");
    scanf("%s", estado_carta_2); 
    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade_carta_2, 31, stdin);
    cidade_carta_2[strcspn(cidade_carta_2, "\n")] = 0; 
    printf("Populacao: ");
    scanf("%d", &populacao_2);
    printf("Area (km2): ");
    scanf("%f", &area_2);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib_2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos_2);
    printf("\n");
    printf("Fim do cadastro.Clique ENTER para exibir resumo:\n"); // Informa o usuário que ele finalizou o cadastro

    // Exibição do resumo dos dados cadastrados
    printf("*** Dados da Carta 1 ***\n");
    printf("->Codigo Atribuido: %s\n", codigo_carta_1); // exibe a string digitada
    printf("->Estado: %s\n", estado_carta_1);
    printf("->Nome da Cidade: %s\n", cidade_carta_1);
    printf("->Populacao: %d\n", populacao_1); //exibe a quantidade de habitantes em formato inteiro
    printf("->Area: %.2f km2\n", area_1); //exibe a área, em formato decimal com 2 casas
    printf("->PIB: %.1f bilhoes de reais\n", pib_1); //exibe PIB com uma casa
    printf("->Numero de Pontos Turisticos: %d\n", pontos_turisticos_1);
    printf("\n");
    printf("\n");
    printf("*** Dados da Carta 2 ***\n");
    printf("->Codigo Atribuido: %s\n", codigo_carta_2);
    printf("->Estado: %s\n", estado_carta_2);
    printf("->Nome da Cidade: %s\n", cidade_carta_2);
    printf("->Populacao: %d\n", populacao_2);
    printf("->Area: %.2f km2\n", area_2);
    printf("->PIB: %.1f bilhoes de reais\n", pib_2);
    printf("->Numero de Pontos Turisticos: %d\n", pontos_turisticos_2);

    // Mantendo a tela aberta para que o usuário confira os dados cadastrados
    printf("\nClique ENTER para finalizar");
    fflush(stdin);//limpa o buffer do teclado
    getchar();//lê o primeiro caractere que for digitado
    getchar();//só funcionou após inserir outro getchar

    return 0;
}