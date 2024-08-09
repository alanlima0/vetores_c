#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[10];
    int count_neg=0;
    float soma_par=0;

    for (int i=0;i<10;i++){
        scanf("%f",&vetor[i]);
        if (vetor[i]>=0){
            soma_par+=vetor[i];
        }
        else{
            count_neg++;
        }
    }
    printf("Quantidade de nº negativos: %d \n",count_neg);
    printf("Soma dos nº positivos: %.2f",soma_par);
    return 0;
}