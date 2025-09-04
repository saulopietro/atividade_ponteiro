
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float matriz[3][3];
    float *p6 = &matriz[0][0];
    int i;
    for (i= 0; i < 9; i++) {
        printf("Digite a nota [%d][%d]: ", i/3, i%3);
        scanf("%f", p6+i);
    }
    printf("\nNotas da matriz:\n");
    for (i = 0; i < 9; i++) {
        printf("%.2f ", *(p6+i));
        if ((i+1)%3 == 0) printf("\n");
    }
    float somaDiag = *(p6+0) + *(p6+4) + *(p6+8);
    printf("Soma da diagonal principal: %.2f\n", somaDiag);

    return 0;
    }
