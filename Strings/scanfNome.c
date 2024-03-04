#include <stdio.h>
#include <string.h>

void main(){

    char nome[30];

    printf("Nome: ");
    scanf("%30[^\n]",nome);

    printf("%s", nome);

}