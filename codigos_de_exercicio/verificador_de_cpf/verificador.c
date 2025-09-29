
#include <stdio.h>

int main()
{
    printf("Verificador de cpf>>\n\n");
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,v1,v2;
    printf("Digite o cpf; ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d",
    &a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&v1,&v2);
    int soma =  (a1*10)+(a2*9)+(a3*8)+(a4*7)(a5*6)+(a6*5)+(a7*4)+(a8*3)+(a9*2);
    int resto = soma % 11;
    int div1,div2;
    if(resto<2){
        div1 = 0;
    }else{
        div1 =11 - resto;
    }
    if(d1==div1){
        soma=(a1*11)+(a2*10)+(a3*9)+(a4*8)(a5*7)+(a6*6)+(a7*5)+(a8*4)+(a9*3)+(v1*2)
    }else{
        printf("Cpf invalido");
    }
    

    return 0;
}
