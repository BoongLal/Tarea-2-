/*Ramírez Sánchez Valeria Irais 
Programa 13*/
#include <stdio.h>
void main(){
    int i, m, p=0, n=0, c=0;
    printf ("\tPrograma para dado un arreglo unidemensional, \n\tdeterminar cuantos de sus elementos son negativos, positivos o nulos\n");
    printf("Ingrese la cantidad de elementos que desea que tenga su arreglo\n");
    scanf("%d", &i);
    int s[i];
    for(m=0;m<i;m++){
        printf("Ingrese un valor(%d):\n", m+1);
        scanf("%d", &s[m]);
    }
    for(m=0;m<i;m++){
        if(s[m]==0){
            c=c+1;
        }
        else{
            if(s[m]<0){
                n=n+1;
            }
            else{
                p=p+1;
            }
        }
    }
    printf("De los elementos del arreglo\n");
    printf("hay %d positivos\n", p);
    printf("hay %d negativos\n", n);
    printf("hay %d nulos\n", c);
}
