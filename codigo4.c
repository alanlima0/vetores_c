//questao7 - página 129
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x[10];
    int maior, menor;

    for(int i = 0;i<10;i++){
        scanf("%d",&x[i]);
    }
    maior = x[5];
    menor = x[5];

    for (int i=0;i<10;i++){
        if (x[i]>maior){
            maior=x[i];
        }
        if (x[i]<menor){
            menor=x[i];
        }
    }
    printf("Maior: %d \n Menor: %d\n",maior,menor);
    return 0;
}