#include <stdio.h>
#define TAM 5

void escrever(int V[]){

    int i;
    for(i = 0; i < TAM; i++){
        printf("%d ",V[i]);
    }
    printf("\n");
}

void main(){
    int numeros[TAM],i,aux,cont;

    for(i = 0; i < TAM; i++){
        printf("digitar numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Vetor antes de ordenar: ");
    escrever(numeros);

    
    for(cont = 1; cont < TAM; cont++){
        for(i = 0; i < TAM - 1; i++){
            if(numeros[i] > numeros[i + 1]){
                aux = numeros[i + 1];
                numeros[i + 1] = numeros[i];
                numeros[i] = aux;
            }
        }
    }
   
    printf("Vetor depois de ordenar: ");
    escrever(numeros);
}