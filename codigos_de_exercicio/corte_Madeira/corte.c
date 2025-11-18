#include <stdio.h>
int main(){
    float tam_madeira = 0,tam1 = 0 ,tam2 = 1 ,tam3 = 0,acumlador = 0,divisor = 0;
    
    do{
        tam1 = tam2;
        tam2 = tam_madeira;
        printf("digite o tamanho da madeira: ");
        scanf("%f",&tam_madeira);
        
        acumlador+= tam_madeira;
        divisor ++;
        
    }while(tam1 != tam2 && tam1 != tam3 && tam2 != tam3);
    float media = acumlador/divisor;
   printf("Media de valores : %.2f\n",media);
   printf("Medida Parada: %.2f\n",tam_madeira);

    
}