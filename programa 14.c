/*Ramírez Sánchez Valeria Irais 
Programa 13*/
#include <stdio.h>
void main(){
    int i, n, m, v=0;
    printf ("\tPrograma para dado un arreglo unidemensional, y un número n, \n\tdeterminar cuantas veces n se encuentra en el arreglo\n\n");
    printf("Ingrese la cantidad de elementos que desea que tenga su arreglo\n");
    scanf("%d", &i);
    int s[i];
    for(m=0;m<i;m++){
        printf("Ingrese un valor(%d):\n", m+1);
        scanf("%d", &s[m]);
    }
    printf("Ingrese un número n.\n");
    scanf("%d", &n);
    for(m=0;m<i;m++){
        if(s[m]==n){
            v=v+1;
        }
    }
    printf("El numero %d, se encuentra %d veces en los elementos del arreglo", n, v);
}
