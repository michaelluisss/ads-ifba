#include
int main(){
    float mi, mf;
    printf("Informe a massa inicial");
    scanf("%f",&mi);
    printf("Informe a massa final");
    scanf("%f",&mf);
    for (int i = 0; mi > mf; i++)
    {
       mi-=mi*0.1;
    }
    printf("%.2f",mi);
}