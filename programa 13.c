/*Ramírez Sánchez Valeria Irais 
Programa 13*/
#include <stdio.h>
void main(){
    int i, n, m, suma=0;
    printf ("\tPrograma para dado un arreglo unidemensional, calcular la suma de sus elementos\n");
    printf("Ingrese la cantidad de elementos que desea que tenga su arreglo\n");
    scanf("%d", &i);
    int s[i];
    for(n=0;n<i;n++){
        printf("Ingrese un valor(%d):\n", n+1);
        scanf("%d", &s[n]);
    }
    for(m=0;m<i;m++){
        suma=suma+s[m];
    }
    printf("Suma=%d", suma);
}
