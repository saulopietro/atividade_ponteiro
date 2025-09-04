#include <stdio.h>
#include <stdlib.h>

int main() { 
    
    int idade;
    int *p2 = &idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Idade digitada: %d\n", *p2);
    printf("Endereco: %u\n\n", (unsigned int)p2);
    
    return 0;
    
}
