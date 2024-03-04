#include <stdio.h>
#include <stdlib.h>
#define TAM_L 3
#define TAM_C 2

void main(){

    int **mat,i,j;

    mat = (int**)malloc(TAM_L*sizeof(int*)); //alocando para o que seriam as linhas

    for(i = 0; i < TAM_L; i++){
        mat[i] = (int*)malloc(TAM_C*sizeof(int)); //alocando para as colunas
    }

    for(i = 0; i < TAM_L; i++){
        for(j = 0; j < TAM_C; j++){
            printf("Posicao [%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < TAM_L; i++){
        for(j = 0; j < TAM_C; j++){  
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}