/******************************************************************************
Faça um programa modularizado em C que crie um vetor dinâmico de 10 posições.
Crie procedimentos para carregar e escrever o vetor dinâmico;

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

teste


void carregaVetor(int *y){
    int i;
    for (i = 0; i < TAM; i++){
        printf("Digite um valor para vet[%i]: ", i);
        scanf("%i", &y[i]);
    }
}

void escreveVetor(int *vet){
    int i;
    for (i = 0; i < TAM; i++){
        printf("%i, ", vet[i]);
    }
    
}

int* criaVetorDinamico(int tam){
    int *v;
    v = (int*) malloc(tam * sizeof(int));
    
    return v;
}

int main()
{
    int *vet;
    vet = criaVetorDinamico(TAM);
    if (vet == NULL){
        printf("Impossivel alocar memoria!\n");
        return 0;
    }
    
    carregaVetor(vet);
    escreveVetor(vet);

    free(vet);

    return 0;
}
