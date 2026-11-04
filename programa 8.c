/*Ramírez Sánchez Valeria Irais 
Programa 8*/
#include <stdio.h>
void main(){
   int n, m, r;
   printf("\tPrograma para determinar si un número es divisor de otro\n ");
   printf("Ingrese dos números separados por un espacio:\n");
   scanf("%d %d", &n, &m);
   if(n>=m){
       r=n%m;
       if (r==0){
           printf("%d es divisor de %d.", m, n);
       }
   }
   else{
       r=m%n;
       if(r==0){
            printf("%d es divisor de %d.", n, m);
       }
       else{
           printf("%d no es divisor de %d.\n", m, n);
           printf("%d no es divisor de %d.", n, m);
       }
   }
}
