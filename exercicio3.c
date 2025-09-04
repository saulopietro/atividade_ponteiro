
#include <stdio.h>
#include <stdlib.h>

int main() {
   
    float produtos[5];
    float *p3 = produtos;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite o preco do produto %d: ", i+1);
        scanf("%f", p3+i);
    }
    printf("\nPrecos e descontos:\n");
    for (i = 0; i < 5; i++) {
        printf("Produto %d: R$%.2f | Com desconto: R$%.2f\n", i+1, *(p3+i), *(p3+i) * 0.9);
    }
    printf("\n");
        
    return 0;
}
