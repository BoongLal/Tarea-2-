/*Ramirez Sanchez Valeria Irais
programa 12*/
#include<stdio.h>
void main (){
  int N, mul=1, i;
  printf("\tPrograma para calcular el producto de \n\tprimeros N numeros naturales.\n");
  printf("Ingrese el número de N primeros números que desea multiplicar:\n");
  scanf("%d", &N);
  for(i=1; i<=N; i++){
    mul=mul*i;
    } 
  printf("El resultado del producto de los primeros %d números es de %d.", N, mul);         
}
