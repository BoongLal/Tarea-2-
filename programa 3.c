/*Ramírez Sánchez Valeria Irais 
programa 3
El programa pide una cantidad en dólares. Como salida da la equivalencia de los dólares dados a pesos*/
#include <stdio.h>
void main(){
   float d=11.96, D, P;
   printf("Ingresa una cantidad en dólares\n");
   scanf("%f", &D);
   P=D*d;
   printf("%.2f dolares equivalen a %.2f pesos", D, P);
}
