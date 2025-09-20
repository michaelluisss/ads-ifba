#include <stdio.h>
int main(){
    float ConsumoKwh,po_de_madeira,vlr_venda,vlr_kwh,diferenca;

    printf("Qual o valor de venda do po de madeira: R$");
    scanf("%f",&vlr_venda);
    printf("Quantidade do po de madeira: ");
    scanf("%f",&po_de_madeira);
    printf("Qual o valor do kWh: ");
    scanf("%f",&vlr_kwh);
    printf("Qual é o consumo do kWh: ");
    scanf("%f",&ConsumoKwh);

    vlr_kwh= ConsumoKwh * po_de_madeira;
    diferenca = vlr_venda - vlr_kwh;
   
    if (vlr_venda > vlr_kwh )
    {
        printf("é valido a venda pois a diferenca é de %.2f ",diferenca);
    }else{
        printf("Nao e valido a venda pois a diferencia é %.2f",diferenca);
    }
}