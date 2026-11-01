/*Ramírez Sánchez Valeria Irais 
programa 2
El programa pide el radio de un circulo y cálcula el área y la cicunferencia de dicho circulo*/
#include <stdio.h>
void main(){
    float r, área, cir, pi=3.1416;
    printf("Ingresa el radio del circulo\n");
    scanf("%f", &r);
    área=pi*(r*r);
    cir=2*pi*r;
    printf("El área del circulo es de %.2f unidades al cuadrado \n", área);
    printf("La circunferencia del circulo es de %.2f unidades", cir);
}
