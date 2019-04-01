#include <stdio.h>
#include <stdlib.h>
#include "Numeros.h"

void cargarVector(int vecNum[],int tam)
{
    int i;
    printf("Llenando vector...\n\n");
    for(i=0;i<tam;i++){
        printf("Ingrese un numero: ");
        scanf("%d",&vecNum[i]);
    }
    printf("\n");
}

void mostrarVector(int vecNum[],int tam)
{
    int i;
    printf("Mostrando vector...\n\n");
    for(i=0;i<tam;i++){
        printf("%d ",vecNum[i]);
    }
    printf("\n");
}

int buscarMax(int vecNum[], int tam)
{
    int i, max, flag = 0;
    printf("\nBuscando el maximo valor dentro del vector...\n");
    for(i=0;i<tam;i++){
        if(vecNum[i] > max || flag == 0){
            max = vecNum[i];
            flag = 1;
        }
    }
    return max;
}

int buscarValor(int vecNum[], int tam, int valor)
{
    int i, indice = -1;
    printf("\nBuscando el valor %d dentro del vector...\n\n",valor);
    for(i=0;i<tam;i++){
        if(valor == vecNum[i]){
            indice = i;
        }
    }
    return indice;
}
