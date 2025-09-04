#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int valor_cofre = 150;
    int * ptr;
    
    ptr = &valor_cofre;
    
    printf("Valor guardado: %d\n", *ptr);
    printf("Endereço: %p\n", &ptr);
    
    return 0;
}
