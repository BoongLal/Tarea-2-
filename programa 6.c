/*Ramírez Sánchez Valeria Irais
Programa 6*/
#include <stdio.h>
void main(){
    float sueldo;
    printf("Programa para calcular su nuevo sueldo\n");
    printf("Ingrese su sueldo actual: \n");
    scanf("%f", &sueldo);
    if(sueldo<1000){
        sueldo=sueldo+sueldo*.15;
        printf("Su nuevo sueldo es de %.2f pesos", sueldo);
    }
    else{
        sueldo=sueldo+sueldo*.12;
        printf("Su nuevo sueldo es de %.2f pesos", sueldo);
    }
}
