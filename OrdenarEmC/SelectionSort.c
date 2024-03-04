#include <stdio.h>
#define TAM 5

void main(){
    int cont,contA,contB,aux;
    int vet[TAM];

    for(cont = 0; cont < TAM; cont++){
        printf("digite um número: ");
        scanf("%d",&vet[cont]);
    }

    for(contA = 0; contA < TAM; contA++){
        for(contB = contA + 1; contB < TAM; contB++){
            if(vet[contA] > vet[contB]){
                aux = vet[contB];
                vet[contB] = vet[contA];
                vet[contA] = aux;
            }
        }
    }

    for(cont = 0; cont < TAM; cont++){
        printf("%d ", vet[cont]);
    }
}