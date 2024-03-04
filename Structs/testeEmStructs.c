#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno{
    int idade;
    char nome[50];

}TipoAluno;

void main(){

    TipoAluno pessoa;

    pessoa.idade = 12;

    printf("%d", pessoa.idade);
}