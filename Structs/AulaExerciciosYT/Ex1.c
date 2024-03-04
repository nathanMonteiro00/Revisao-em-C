#include <stdio.h>
#include <stdlib.h>

typedef struct livro{

    char titulo[100];
    float preco;
    int n_pags;

}Livro;


void main(){
    Livro *livro1 = (Livro *)calloc(1, sizeof(Livro));
    Livro livro2;

    printf("Tamanho do livro 1: %ld", sizeof(livro1));
    printf("\nTamanho do livro 2: %ld", sizeof(livro2));
    printf("\nTamanho do *livro 1: %ld", sizeof(*livro1));
}