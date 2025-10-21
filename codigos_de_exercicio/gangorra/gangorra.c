#include <stdio.h>
int main(){
    float p1,p2,c1,c2;
    printf("qual o peso da primeira crianca ");
    scanf("%f",&p1);
    printf("qual o peso da segunda crianca ");
    scanf("%f",&p2);
    printf("Qual o comprimento do lado esquerdo da gangorra ");
    scanf("%f",&c1);
    printf("Qual o comprimento do lado esquerdo da gangorra ");
    scanf("%f",&c2);

    if(p1*c1 == p2 * c2){
       
        printf("gangorra equilibrada\n");
    }else if(p1*c1 < p2 * c2){
        printf("lado 1 da gangorra para cima\n");

    }else if(p1*c1 > p2 * c2){
        printf("lado 2 da gangorra para cima\n");
    }

}