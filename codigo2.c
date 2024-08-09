#include <stdio.h>
#include <stdlib.h>
/*programa que possui um array que armazena 6 números inteiros e executa os seguintes passos:
    1- Atribue os seguintes valores ao array: 1,0,5,-2,-5,7
    2- Armazena em uma variavel chamada soma a soma dos valores das posições nums[0], nums [1], nums[5]
    3 - Modifica o array nums na posição [4] atribuindo o valor 100.
    4 - Mostra na tela a variavel soma e a cada valor do array nums, um em cada linha
*/
int main(){
    int nums[6]={1,0,5,-2,-5,7};
    int soma = nums[0] + nums[1] + nums[5];

    printf ("Soma dos valores = %d",soma);
    nums[4] = 100;

    for (int i = 0; i<6;i++){
        printf("%d \n",nums[i]);
    }
    return 0;
}
