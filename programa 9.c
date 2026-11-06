/*Ramírez Sánchez Valeria Irais
Programa 9*/
#include <stdio.h>
void main (){
    int u, n,t;
    printf("\tPrograma para calcular la tabla de multiplicar de un número entero.\n");
    printf("Ingrese el número entero del cual quiere conocer su tabla de multiplicar:\n");
    scanf("%d", &n);
    printf("\tLa tabla de multiplicar del número %d es:\n", n);
    for(u=1;u<=10;u++){
        t=n*u;
        printf("%d x %d = %d\n", n, u, t);
    }
}
