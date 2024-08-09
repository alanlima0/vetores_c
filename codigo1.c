#include <stdio.h>
#include <stdlib.h>

//programa que lê 5 valores inteiros, imprime-os no terminal e em seguida mostra a média aritmetica 

int main(){

    int valores[5], soma;
    float media;

    printf("Insira 5 valores: ");
    for (int i = 0;i<5;i++){
        scanf("%d",&valores[i]);
        soma+=valores[i];
    }
    for (int i = 0;i<5;i++){
        printf("Valor %d lido: %d \n",i,valores[i]);
    }

    media = soma/5;
    printf("Media dos valores lidos: %.2f",media);

    return 0;
}