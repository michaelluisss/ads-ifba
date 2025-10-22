#include <stdio.h>
int main()
{
    int cadeado, segredo, c1, c2, c3;
    printf("Qual o numero a ser mostrado?");
    scanf("%d", &cadeado);
    printf("qual é o segredo");
    scanf("%d", &segredo);
    c1 = cadeado / 100;
    cadeado = cadeado % 100;

    c2 = cadeado / 10;
    
    c3 = cadeado % 10;

    int s1, s2, s3;
    s1 = segredo / 100;
    segredo = segredo % 100;

    s2 = segredo / 10;
    segredo = segredo % 10;

    s3 = segredo;
    if (c1 - s1 == 0)
    {
        printf("primeiro precisa de 0 \n");
    }
    else if (c1 > s1)
    {
        c1 = c1 - s1;
        printf("primeiro precisa de %d movimentos \n", c1);
    }
    else if (c1 < s1)
    {
        c1 = s1 - c1;
        printf("primeiro precisa de %d movimentos \n", c1);
    }

    if (c2 - s2 == 0)
    {
        printf(" segundo precisa de 0 \n");
    }
    else if (c2 > s2)
    {
        c2 = c2 - s2;
        printf("segundo precisa de %d movimentos \n", c2);
    }
    else if (c2 < s2)
    {
        c2 = s2 - c2;
        printf("segundo precisa de %d movimentos\n", c2);
    }

    if (c3 - s3 == 0)
    {
        printf("terceiro precisa de 0 \n");
    }
    else if (c3 > s3)
    {
        c3 = c3 - s3;
        printf("terceiro precisa de %d movimentos \n", c3);
    }
    else if (c3 < s3)
    {
        c3 = s3 - c3;
        printf("terceiro precisa de %d movimentos \n", c3);
    }
    int soma = (c1 + c2 + c3)- 10;
    printf(" sao necessarios %d", soma);
    getchar();
}