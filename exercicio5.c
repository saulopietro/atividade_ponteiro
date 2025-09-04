
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float notas[6];
    float *p5 = notas;
    int i;
    for ( i = 0; i < 6; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", p5+i);
    }
    for (i = 0; i < 3; i++) {
        float temp = *(p5+i);
        *(p5+i) = *(p5+(5-i));
        *(p5+(5-i)) = temp;
    }
    printf("\nNotas invertidas:\n");
    for (i = 0; i < 6; i++) {
        printf("%.2f ", *(p5+i));
    }
    printf("\n\n");
    
    return 0;
    }
