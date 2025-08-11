#include <stdio.h>
int main() {
    
char estado; // Variavel da pergunta do Estado
char codigo[60]; // Variavel do Codigo de 01 a 04
char cidade[50]; // Variavel da Cidade
int populacao, ponto; // Varivel da quantidade da populacao e ponto turistico
float area, PIB; // Variavel do valor da Area e do PIB

//Usaremos Int para numeros inteiros, Char para caracteres, e float para numeros decimais

//Carta 1: aqui faremos a programacao da primeira carta, tendo objetivo de deixar separado e organizado

printf("Carta 1:\n");
printf("Escolha uma Letra de 'A' a 'H' (representando um dos oitos estados): ");
scanf("%c", &estado);

printf("Escolha o Codigo da Carta (a letra do estado seguida de um numero de 01 a 04): ");
scanf("%s", &codigo);

printf("Qual o nome da cidade: ");
scanf("%s", &cidade);

printf("Qual o numero da populacao: ");
scanf("%d", &populacao);

printf("Qual a area (em km²): ");
scanf("%f", &area);

printf("qual o valor do PIB: ");
scanf("%f", &PIB);

printf("Qual o numero de pontos turisticos: ");
scanf("%d", &ponto);

printf("Muito bem! a Carta n. 1 foi feita\n");
printf("Vamos fazer a carta n. 2 agora!\n");



//Carta 2: Aqui criamos a segunda variavel
char estado2;
char codigo2[60];
char cidade2[50];
int populacao2, ponto2;
float area2, pib2;


printf("Escolha uma letra de 'A' a 'H' (representando um dos oitos estados): ");
scanf("%s", &estado2);

printf("Escolha o Codigo da Carta (a letra do estado seguida de um numero de 01 a 04: ");
scanf("%s", &codigo2);

printf("Qual o nome da cidade: ");
scanf("%s", &cidade2);

printf("Qual a populacao: ");
scanf("%d", &populacao2);

printf("Qual o tamanho da Area da Cidade (em km²): ");
scanf("%f", &area2);

printf("Qual o valor do PIB: ");
scanf("%f", &pib2);

printf("Qual o numero de pontos turisticos: ");
scanf("%d", &ponto2);

printf("\n");
printf("\n");



printf("Resultado da Carta 1\n");
printf("Carta 1:\n");
printf("Estado: %c\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da Cidade: %s\n", cidade);
printf("Populacao: %d\n", populacao);
printf("Area: %.2f km²\n", area);
printf("PIB: %f\n", PIB);
printf("Numero de Pontos Turisticos: %d\n", ponto);

printf("\n");
printf("\n");


printf("Resultado da Carta 2\n");
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2fkm²\n", area2);
printf("PIB: %f\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", ponto2);

return 0;
}
    return 0;
}
