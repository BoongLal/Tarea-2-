/*Ramirez Sanchez Valeria Irais
programa 11*/
#include<stdio.h>
void main (){
  int i, suma=0;  
  printf("\tPrograma para calcular la suma de los números pares\n\t comprendidos entre 10 y 50\n");  
  for(i=11; i<50; i++){
    if(i%2==0){
      suma=suma+i;
      }
    }
  printf("La suma de los números pares comprendidos entre 10 y 50 es %d", suma);    
}
