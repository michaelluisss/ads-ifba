/*Exiba um menu com as seguintes opções:
$ Celsius para Fahrenheit
$ Fahrenheit para Celsius
$ Sair
Use um switch para processar a escolha do usuário.
Para as opções de conversão, solicite a temperatura correspondente e realize a operação usando as fórmulas:
Celsius para Fahrenheit: F=C×95+32
Fahrenheit para Celsius: C=(F−32)×59
Caso o usuário escolha uma opção inválida, exiba “Opção inválida”.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    float celsius,far;
    int valor;
    do{
    printf("1.Celsius para Fahrenheit\n");
    printf("2.Fahrenheit para Celsius\n");
    printf("3.Sair\n");
    printf("Digite: ");
    scanf("%d",&valor);
    switch ( valor ){
        case 1:
        printf("Digite o valor em Celsius: ");
        scanf("%f",&celsius);
        far = (celsius * 9/5) + 32;

        printf("%.2fF\n",far);

        break;
        case 2:
        printf("Digite o valor em Fahrenheit: ");
        scanf("%f",&far);
        celsius = (far - 32) * 5 / 9;

        printf("%.2f°C\n",celsius);
        break;
    
        default:
        if(valor !=3){printf("numero invalido\n");

        }
        
        break;
    }



    }while(valor != 3);
    
    
}