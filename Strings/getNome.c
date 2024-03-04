#include <stdio.h>
#include <string.h>

void main(){

    char nome[10]; // lembrando que toda string termina com '\0'. Logo, tenho 50 caracteres disponíveis.

    printf("Digite seu nome: ");
    fgets(nome,10,stdin); 

    printf("%s", nome);
}