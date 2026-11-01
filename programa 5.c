/*Ramírez Sánchez Valeria Irais 
programa 5
El programa solicita el monto de la compra y evalua si cumple con los requisitos para ser acredor a un descuento; en caso afirmativo aplica el descuento, de lo contrario solo devuelve el monto ingresado*/
#include <stdio.h>
void main(){
   float m, t;
   printf("Ingrese el monto de su compra\n");
   scanf("%f", &m);
   t=m;
   if(t>2500){
       t=t-t*.08;
   }
   printf("El monto total a pagar es de %.2f", t);
}
