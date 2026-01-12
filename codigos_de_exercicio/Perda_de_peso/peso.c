#include <stdio.h>
int main(){
    float mi, mf;
    int minuto =0;
    printf("Informe a massa inicial");
    scanf("%f",&mi);
    printf("Informe a massa final");
    scanf("%f",&mf);
    for (int i = 1; mi > mf; i++)
    {
       mi-=mi*0.1;
       minuto = i;
    }
    printf("massa %.2f\n minutos %d\n",mi,minuto);
}