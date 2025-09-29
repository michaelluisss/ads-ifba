
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
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, raiz1, raiz2, delta;

    printf("digite os coeficientes e separe por espaco: ");
    scanf("%f %f %f", &a, &b, &c);
    delta = (b * b) - 4 * a * c;
    if (delta >= 0)
    {

        printf("Temos uma equacao quadratica com duas raiz\n");
        
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes da equacao sao:\n x1= %.1f x2=%.1f", raiz1, raiz2);
    }
    else{
        printf("Essa equacao nao tem raizes reais!");
    }
}