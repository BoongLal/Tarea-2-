/*Ramírez Sánchez Valeria Irais 
Programa 7*/
#include <stdio.h>
void main(){
    float p, d, t, c=0.23 ;
    printf("\tPrograma para calcular el costo de su viaje en ferrocarril\n");
    printf("Ingrese la distancia en km que recorrera para llegar a su destino:\n");
    scanf("%f", &d);
    printf("Ingrese los días que parmanecera en el lugar:\n");
    scanf("%f", &t);
    d=d*2;
    p=c*d;
    if (d>800 && t>7){
        p=p*0.30;
    }
    printf("El precio a pagar por su viaje de ida y vuelta, con una estancia de %.0f días, es de %.2f pesos.", t, p);
}
