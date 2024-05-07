#include "lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenar(int* v, int cant);

void mostrar(int* v, int cant);

int main()
{
    int *v = new int[10];
    
    v = resize(v, 10, 25);

    delete []v; // Por cada new tiene que haber un delete.
    v = NULL; // Me aseguro que el puntero no quede apuntando a memoria que ya no pertenece a mi programa.

    return 0;
}

void llenar(int* v, int cant)
{
    srand(time(NULL));
    for(int i = 0 ; i < cant ; i++)
    {
        v[i] = rand()%100;
    }
}

void mostrar(int* v, int cant)
{
    printf("Vector:\n");
    for(int i = 0 ; i < cant ; i++)
    {
        printf("%d\t", v[i]);
    }
}