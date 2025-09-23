
/*Cálculo de raízes reais de uma equação quadrática
Crie um programa que:
Solicite ao usuário os coeficientes a
, b, e c de uma equação quadrática ax2+bx+c=0
.
Calcule o discriminante Δ=b2−4ac
.
Use if/else para classificar as raízes:

Se Δ<0 exiba “Não existem raízes reais”.
Se Δ=0: calcule a raiz única e exiba.
Se Δ>0
calcule as duas raízes e exiba
Valide se a é diferente de zero antes de realizar os cálculos.*/
#include <stdio.h>
#include <stdlib>
int main(){
    float a,b,c,raiz1,raiz2,delta;

    printf("digite os coeficientes e separe por espaco: ");
    scanf("%f %f %f",&a,&b,&c);
    delta =(b*b)-4*a*c;
    if(delta =>0){
        if(delta > 0){
            printf("Temos uma equacao quadratica com duas raiz\n");
            
        }
    }
}