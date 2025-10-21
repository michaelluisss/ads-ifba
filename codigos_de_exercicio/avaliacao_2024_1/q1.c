#include <stdio.h>
int main(){
    int DistanciaTotal;
    printf("Qual a distancia pecorrida? ");
    scanf("%d",&DistanciaTotal);
    if (DistanciaTotal < 6)
    {
        printf("Permaneceu no acelerador");
    }else if(DistanciaTotal >= 6){
        if(DistanciaTotal== 6){
            printf("a particula saiu no sensor 1");
        }else
        if(DistanciaTotal== 7){
            printf("a particula saiu no sensor 2");
        }else
        if(DistanciaTotal== 8){
            printf("a particula saiu no sensor 3");
        }

    }
    if (DistanciaTotal > 8 )
    {
        DistanciaTotal=DistanciaTotal - 3;
        for ( int i = 0; i < 8; i++)
        {
            i = DistanciaTotal;
            DistanciaTotal= DistanciaTotal - 8;
        }
        if (DistanciaTotal < 4 || DistanciaTotal == 7)
        {
            printf("Permaneceu no sensor");
        }
        if (DistanciaTotal== 4)
        {
            printf("a particula sai no sensor 1 ");
        }else if (DistanciaTotal== 5)
        {
            printf("a particula sai no sensor 1 ");
        }else if (DistanciaTotal== 6)
        {
            printf("a particula sai no sensor 1 ");
        }
        }
    else{
            printf("a");}
    return 0;
}