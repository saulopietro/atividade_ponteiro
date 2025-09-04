
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n;
    printf("Quantos funcionarios? ");
    scanf("%d", &n);
    int *horas = (int*) malloc(n * sizeof(int));
    int soma = 0;
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite as horas do funcionario %d: ", i+1);
        scanf("%d", (horas+i));
        soma += *(horas+i);
    }
    printf("Total de horas trabalhadas no mes: %d\n\n", soma);
    
    free(horas);
    
    return 0;
   }
