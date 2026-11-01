/*Ramírez Sánchez Valeria Irais 
programa 1
El programa pide dos numeros al usuario. Como salida da el reultado de sumar, restar y multiplicar ambos números (incluye dos digitos después del punto)*/
#include <stdio.h>
void main(){
    float n, m,sum, res, mul; 
    printf("Ingrese un dos números separados por un espacio\n");
    scanf("%f %f", &n, &m);
    sum=n+m;
    res=n-m;
    mul=n*m;
    printf("%.2f + %.2f = %.2f\n", n, m, sum);
    printf("%.2f - %.2f = %.2f\n", n, m, res);
    printf("%.2f x %.2f = %.2f\n", n, m, mul);
}
