// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 2
// Faça um programa que cadastre o nome e o salário de 10 funcionários. Use o algoritmo
// de ordenação Selection Sort para listar todos os dados dos funcionários das seguintes
// formas:
// (a) em ordem decrescente de salário.
// (b) em ordem alfabética.

#include <stdio.h>
#include <string.h>

// Vector Size
#define vectorSize 10

// Estrutura para os dados
typedef struct funcionario{
    char nome [50];
    float salario;        
}DadosFuncionario;


// Protótipos de função
int readVector(DadosFuncionario vet[]);
int printVector(DadosFuncionario vet[]);
int dummyData(DadosFuncionario vector[]);
void insertionSort(DadosFuncionario arr[]);

int main()
{
    // Definindo o Vetor
    DadosFuncionario vector[vectorSize];  // Código para leitura de vetor  

    printf("\nPrograma de Ordenacao com SelectionSort\n\n");

    // Leitura do Vetor
    //readVector(vector);
    // Populando o vetor sem necessidade de interação com usuario
    dummyData(vector);
    

    // Imprime o vetor antes
    printf("\n--- Vetor antes da ordenacao:\n\n");
    printVector(vector);

    insertionSort(vector);

    // Imprime o vetor após
    printf("\n--- Vetor apos a ordenacao:\n\n");
    printVector(vector);

    printf("\n");
    return 0;
}

// Dummy Data
int dummyData(DadosFuncionario vector[]){
    
    strcpy(vector[0].nome,"R. J. Dio");
    vector[0].salario = 2000;

    strcpy(vector[1].nome,"Jeff Hanneman");
    vector[1].salario = 20000;

    strcpy(vector[2].nome,"Dimebag Darrel");
    vector[2].salario = 1000;

    strcpy(vector[3].nome,"Tom Araya");
    vector[3].salario = 592;
    
    strcpy(vector[4].nome,"Phil Anselmo");
    vector[4].salario = 3698;
    
    strcpy(vector[5].nome,"Ritchie Blackmore");
    vector[5].salario = 68423;

    strcpy(vector[6].nome,"Chuck Schuldiner");
    vector[6].salario = 1255;

    strcpy(vector[7].nome,"Gary Holt");
    vector[7].salario = 5264;

    strcpy(vector[8].nome,"Kerry King ");
    vector[8].salario = 78944;

    strcpy(vector[8].nome,"Nina Hagen");
    vector[8].salario = 36885;

    strcpy(vector[9].nome,"Dave Lombardo");
    vector[9].salario = 5596;   
}

// Função para leitura do Vetor
// Recebe um vetor como parâmetro
int readVector(DadosFuncionario vet[])
{
    printf("Leitura do vetor:\n");
    for (int i = 0; i < vectorSize; i++)
    {
        printf("Nome do funcionario[%d] = ", i + 1);
        scanf("%s", &vet[i].nome);
        printf("Salario do Funcionario[%d] = ", i + 1);
        scanf("%f", &vet[i].salario);
    }
    return 0;
}

// Função para impressão do Vetor
// Recebe um vetor como parâmetro
int printVector(DadosFuncionario vet[])
{
    for (int i = 0; i < vectorSize; i++)
        printf("Funcionario[%d]\n - Nome: %s\n - Salario: %2.f\n", (i + 1), vet[i].nome, vet[i].salario);
    return 0;
}

// Função Insertion Sort
// Recebe um vetor como parâmetro
void insertionSort(DadosFuncionario arr[]) 
{ 
    int j; 
    DadosFuncionario varAux, key;
    for (int i = 1; i < vectorSize; i++) { 
        key = arr[i]; 
        j = i - 1;           
        while (j >= 0 && arr[j].salario > key.salario) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
} 


