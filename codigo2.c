#include <stdio.h>
#include <stdlib.h>

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
