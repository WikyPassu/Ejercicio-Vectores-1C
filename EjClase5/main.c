#include <stdio.h>
#include <stdlib.h>
#include "Numeros.h"
#define T 5

int main()
{
    int numeros[T], maximo, posicion, numero;
    cargarVector(numeros,T);
    mostrarVector(numeros,T);
    maximo = buscarMax(numeros,T);
    printf("\nMaximo numero ingresado: %d\n",maximo);
    printf("\nIngrese el valor a encontrar: ");
    scanf("%d",&numero);
    posicion = buscarValor(numeros,T,numero);
    if(posicion != -1){
        printf("Valor encotrado en la posicion [%d]\n\n",posicion);
    }
    else{
        printf("Valor no encontrado dentro del vector.\n\n");
    }
    system("pause");
    return 0;
}

