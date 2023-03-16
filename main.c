#include <stdio.h>

int main()
{
    #define TAM_MAX 5
    int Vetor[TAM_MAX];
    int Contador = 0;
    
    for(int i = 0; i < TAM_MAX; i++)
    {
        printf("Digite o %d° Número:\n", i+1);
        scanf("%d", &Vetor[i]);
    }
    
    for(int i = 0; i < TAM_MAX; i++)
    {
        if (Vetor[i] > 100)
        {
            Contador++;
        }
    }
    
    printf("Você digitou %i número(s) maiores que 100!", Contador);

    return 0;
}