/*Crie um programa que:

Solicite ao usuário seu peso (em kg) e sua altura (em metros).
Calcule o IMC usando a fórmula IMC=pesoaltura2
.
Use if/else para classificar o IMC em categorias:
Abaixo do peso: IMC < 18.5
Peso normal: 18.5 ≤ IMC < 24.9
Sobrepeso: 25 ≤ IMC < 29.9
Obesidade: IMC ≥ 30
Exiba a categoria correspondente ao usuário.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float peso,altura,resultado;
    resultado = peso/pow(altura,altura);
    printf("%f",&resultado);
    return 0;
}