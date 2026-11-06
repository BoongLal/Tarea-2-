/*Ramírez Sánchez Valeria Irais
Programa 10*/
#include <stdio.h>
void main(){
    int num, pos=0, nul=0, neg=0;
    printf("\tPrograma para calcular cuantos de los  100 números naturales \n\tingresados son positivos, negativos o nulos.\n");
    for(int i=0; i<100;i++){
        printf("Ingrese un número natural(%d):\n", i+1);
        scanf("%d", &num);
        if(num==0){
            nul=nul+1;
        }
        else{
            if(num<0){
                neg=neg+1;
            }
            else{
                pos=pos+1;
            }
        }
    }
    printf("\tDe los 100 números ingresados:\n");
    printf("%d son nulos\n", nul);
    printf("%d son positivos\n", pos);
    printf("%d son negativos.", neg);
}
