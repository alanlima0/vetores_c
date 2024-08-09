//questao 6 - página 129
#include <stdio.h>
#include <stdlib.h>

//programa que lê 10 valores do teclado e os armazena em um vetor, em seguida mostra quantos valores pares foram armazenados no vetor

int main(){
    int vetor[10], count = 0;
    for (int i = 0; i<10; i++){
        scanf("%d",&vetor[i]);
        if (vetor[i]%2==0){
            count++;
        }
    }
    printf("Quantidade de números pares: %d",count);
    return 0;
}
