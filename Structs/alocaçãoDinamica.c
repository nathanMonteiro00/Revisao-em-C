#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct livro{

    char titulo[100];
    unsigned int nmrPags;
    float preco;

}Livro;

typedef struct  aluno{

    char nome[100];
    int idade;
    Livro *livroFav;

}Aluno;


// CRUD - Create Read Update Delete

void printLivro(Livro *livro){

    printf("Titulo: %s\n", livro -> titulo);
    printf("Numero de paginas: %d\n", livro -> nmrPags);
    printf("preco: %0.2f R$\n", livro -> preco);

}

Livro *createLivro(const char *titulo, unsigned int paginas, float preco){ // const -> indica uma variável que não pode ser modificada durante a execução do programa.

    Livro *livro = (Livro*)calloc(1, sizeof(Livro));

    strcpy(livro -> titulo, titulo);
    livro -> nmrPags =  paginas;
    livro -> preco = preco;

    return livro;
}

Livro *copyLivro(const Livro *livro){
    
    return createLivro(livro -> titulo, livro -> nmrPags, livro -> preco);

}

Aluno *createAluno(const char *nome, int idade, Livro *livro_fav){

    Aluno *aluno = (Aluno*)calloc(1, sizeof(Aluno));

    strcpy(aluno -> nome, nome);
    aluno -> idade = idade;
    aluno -> livroFav = copyLivro(livro_fav);

    return aluno;

}

void printAluno(Aluno *aluno){

    printf("\n\nNome: %s\n", aluno -> nome);
    printf("Idade: %d\n\n", aluno -> idade);
    printf("----- Livro Favorito -----\n");
    printLivro(aluno -> livroFav);
}

bool livrosIguais(const Livro *livro1, const Livro *livro2){

    if(strcmp(livro1 -> titulo, livro2 -> titulo) == 0){
        return true;
    }else{
        return false;
    };
}

void destroyLivro(Livro **liv){ // na main tenho que passar o endereço da minha variável livro

    free(*liv);
    *liv = NULL;

     // Quando a compilação terminar, tudo que está na memória Stack será apagado. Logo, ao fazer free(*liv) terei limpado toda a memória que foi usada.
}

void destroyAluno(Aluno **aluno_ref){

    Aluno *aluno = *aluno_ref;
    destroyLivro(&aluno -> livroFav);
    free(aluno);
    *aluno_ref = NULL;

}

void main(){

    Livro *asoiaf = createLivro("A song of Ice and Fire", 800, 300);
    Aluno *nathan = createAluno("Nathan (eu)", 22, asoiaf);

    
    
    printAluno(nathan);

    
    printf("Os livros sao iguais?\n");
    
    if(livrosIguais(nathan -> livroFav, asoiaf)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }

    printf("\n\n");
    printLivro(asoiaf);

    destroyLivro(&asoiaf);
    
    //printAluno(nathan);
}