
/*Ramírez Sánchez Valeria Irais
Programa 16*/
#include <stdio.h>
void main() {
    int num[100], i;
    for (i=1;i<=100;i++) {
        num[i]=i*2;
    }
    printf("Los elementos de la matriz son:\n");
    for (i=1;i<=100;i++) {
        printf("%d, ", num[i]);
    }
}
