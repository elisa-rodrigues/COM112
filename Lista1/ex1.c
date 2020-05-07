// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 1
// Escreva um algoritmo (utilize a linguagem C) que resolva o problema da busca sequencial
// de um valor chave inteiro em um vetor V de tamanho n, sem repetição de valores.
// E devolva a quantidade de números comparados até encontrar o valor chave.

#include <stdio.h>
// Vector Size
#define vectorSize 5

// Protótipos de função
int readVector(int vet[]);
int printVector(int vet[]);
int linearSearch(int v[], int value);

int main()
{
    // Definindo o Vetor
    int vector[vectorSize];
    // Definindo o índice a ser retornado e o valor de pesquisa
    int index, searchValue;

    printf("\nPrograma de Busca Sequencial\n\n");

    // Leitura do Vetor
    readVector(vector);

    // Leitura do valor a ser pesquisado
    printf("\nDigite um valor para pesquisar: ");
    scanf("%d", &searchValue);

    // Imprime o vetor lido
    printVector(vector);

    // Chamada da pesquisa sequencial
    index = linearSearch(vector, searchValue);

    // Tratamento do retorno da Pesquisa Sequencial
    if (index == -1)    
        printf("\n\n --Valor nao encontrado no vetor!");    
    else    
        printf("\n\n --Valor %d encontrado. Numero de comparacoes feitas: r[%d]", searchValue, index + 1);
    
    printf("\n");
    return 0;
}

// Função para leitura do Vetor
// Recebe um vetor como parâmetro
int readVector(int vet[])
{
    printf("Leitura do vetor:\n");
    for (int i = 0; i < vectorSize; i++)
    {
        printf("Vetor[%d] = ", i + 1);
        scanf("%d", &vet[i]);
    }
    return 0;
}

// Função para impressão do Vetor
// Recebe um vetor como parâmetro
int printVector(int vet[])
{
    printf("Vetor na memoria:\n");
    for (int i = 0; i < vectorSize; i++)
        printf("[%d] = %d \n", (i + 1), vet[i]);
    return 0;
}

// Função de Busca Sequencial
// Recebe um vetor e um valor de pesquisa como parâmetros
int linearSearch(int v[], int value)
{
    for (int i = 0; i < vectorSize; i++)
    {
        if (v[i] == value)
            return i;
    }
    // Valor não encontrado
    return -1;
}

