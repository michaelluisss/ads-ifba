#include <stdio.h>
#include <stdbool.h>
#define TAM 50
int main()
{
    char text[TAM];
    char cobol[5] = {'c', 'o', 'b', 'o', 'l'};
    int j = 0;
    int i = 0;
    int cont = 0;
    printf("Digite as 5 palavras separadas por hifen:\n");
    fgets(text, TAM, stdin);
    while (i < 5)
    {
        while (text[j] != '-'){
            
            if ((j == 0  || text[j -1] == '-') || (text[j-1] == '-' || text[j+1] == '\n' || text[j+1] == '\0'))
            {
                if (text[j] == cobol[i]){
                    cont++;
                } 
            }
        
            j++;
        
            
        } i++;
         j++;
    }
    if(cont == 5)
    {
        printf("COBOl");
    }
    else{
        printf("BUG");
    }
}
